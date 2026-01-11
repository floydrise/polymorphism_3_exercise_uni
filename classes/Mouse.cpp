//
// Created by Stefan Petrov on 11.01.26.
//

#include "Mouse.h"

#include <iostream>
#include <utility>

#include "Vegetable.h"

void Mouse::makeSound() {
    std::cout << "SQUEEEAAAK!" << '\n';
}

Mouse::Mouse(std::string _animalName, std::string _animalType, double _animalWeight, int _foodEaten,
             std::string _livingRegion) : Mammal(std::move(_animalName), std::move(_animalType), _animalWeight,
                                                 _foodEaten, std::move(_livingRegion)) {
};

void Mouse::eat(Food &f) {
    if (dynamic_cast<Vegetable *>(&f)) {
        this->foodEaten = f._quantity;
    } else {
        std::cout << "Mice are not eating that type of food!\n";
    }
}

void Mouse::print() const {
    std::cout << this->animalType << "[" << this->animalName << ", " << this->animalWeight <<
            ", " << this->livingRegion << ", " << this->foodEaten << "]\n";
}
