#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "classes/Animal.h"
#include "classes/Cat.h"
#include "classes/Meat.h"
#include "classes/Mouse.h"
#include "classes/Tiger.h"
#include "classes/Vegetable.h"
#include "classes/Zebra.h"

std::vector<std::string> split(const std::string &str, const char delimiter) {
    std::stringstream ss{str};
    std::vector<std::string> res;
    std::string token;
    while (getline(ss, token, delimiter)) {
        res.push_back(token);
    }
    return res;
}

int main() {
    // animal info
    std::string animalName;
    std::string animalType;
    double animalWeight;
    std::string livingRegion;
    std::string breed;
    std::string foodType;
    int foodQuantity;

    // save read lines
    std::string buffer;

    // create Animal object
    Animal *animal = nullptr;
    Food *food = nullptr;


    int read_line = 1;

    // prompt user for input
    std::cout << "Enter animal information: \n";

    while (getline(std::cin, buffer) && buffer != "End") {
        // free up memory from previous iterations
        delete animal;
        delete food;
        animal = nullptr;
        food = nullptr;

        // put values into vector
        std::vector<std::string> vec = split(buffer, ' ');

        // read the vec calues into separate variables
        if (read_line == 1) {
            animalType = vec[0];
            animalName = vec[1];
            animalWeight = std::stod(vec[2]);
            livingRegion = vec[3];
            if (animalType == "Cat") {
                breed = vec[4];
            } else {
                breed = "";
            };

            // clear vector for next input
            vec.clear();
            read_line++;
            std::cout << "\nEnter veg info: \n";
        } else if (read_line == 2) {
            vec = split(buffer, ' ');

            foodType = vec[0];
            foodQuantity = std::stoi(vec[1]);

            vec.clear();

            if (animalType == "Zebra") {
                if (foodType == "Vegetable") {
                    food = new Vegetable{foodQuantity};
                } else {
                    food = new Meat{foodQuantity};
                }

                animal = new Zebra(animalName, animalType, animalWeight, 0, livingRegion);
                animal->makeSound();
                animal->eat(*food);
                animal->print();
            } else if (animalType == "Mouse") {
                if (foodType == "Vegetable") {
                    food = new Vegetable{foodQuantity};
                } else {
                    food = new Meat{foodQuantity};
                }
                animal = new Mouse(animalName, animalType, animalWeight, 0, livingRegion);
                animal->makeSound();
                animal->eat(*food);
                animal->print();
            } else if (animalType == "Cat") {
                animal = new Cat(animalName, animalType, animalWeight, 0, livingRegion, breed);
                food = new Food{foodQuantity};
                animal->makeSound();
                animal->eat(*food);
                animal->print();
            } else if (animalType == "Tiger") {
                if (foodType == "Vegetable") {
                    food = new Vegetable{foodQuantity};
                } else {
                    food = new Meat{foodQuantity};
                }
                animal = new Tiger(animalName, animalType, animalWeight, 0, livingRegion);
                animal->makeSound();
                animal->eat(*food);
                animal->print();
            }
            read_line--;
            std::cout << "\nEnter animal information: \n";
        }
    }

    return 0;
}
