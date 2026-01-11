//
// Created by Stefan Petrov on 11.01.26.
//

#include "Zebra.h"

#include <iostream>

#include "Vegetable.h"

void Zebra::makeSound() {
    std::cout << "Zs!" << '\n';
};

Zebra::Zebra(std::string _animalName, std::string _animalType, double _animalWeight, int _foodEaten,
             std::string _livingRegion) : Mammal(std::move(_animalName), std::move(_animalType), _animalWeight,
                                                 _foodEaten, std::move(_livingRegion)) {
}

void Zebra::eat(Food &f) {
    if (dynamic_cast<Vegetable *>(&f)) {
        this->foodEaten = f._quantity;
    } else {
        std::cout << "Zebras are not eating that type of food!\n";
    }
}

void Zebra::print() const {
    std::cout << this->animalType << "[" << this->animalName << ", " << this->animalWeight <<
            ", " << this->livingRegion << ", " << this->foodEaten << "]\n";
}
