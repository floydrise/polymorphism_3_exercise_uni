//
// Created by Stefan Petrov on 11.01.26.
//

#include "Tiger.h"

#include <iostream>
#include <utility>

#include "Meat.h"

Tiger::Tiger(std::string _animalName, std::string _animalType, double _animalWeight, int _foodEaten,
             std::string _livingRegion) : Feline(std::move(_animalName), std::move(_animalType), _animalWeight,
                                                 _foodEaten, std::move(_livingRegion)) {
}


void Tiger::makeSound() {
    std::cout << "Roar!" << '\n';
};

void Tiger::eat(Food &f) {
    if (dynamic_cast<Meat *>(&f)) {
        this->foodEaten = f._quantity;
    } else {
        std::cout << "Tigers are not eating that type of food!\n";
    }
}

void Tiger::print() const {
    std::cout << this->animalType << "[" << this->animalName << ", " << this->animalWeight <<
            ", " << this->livingRegion << ", " << this->foodEaten << "]\n";
}
