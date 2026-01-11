//
// Created by Stefan Petrov on 11.01.26.
//

#include "Cat.h"

#include <iostream>
#include <utility>

Cat::Cat(std::string _animalName, std::string _animalType, double _animalWeight,
         int _foodEaten, std::string _livingRegion, std::string _breed) : Feline(std::move(_animalName),
                                                                              std::move(_animalType),
                                                                              _animalWeight,
                                                                              _foodEaten, std::move(_livingRegion)),
                                                                          breed{std::move(_breed)} {
};


void Cat::makeSound() {
    std::cout << "Meow!" << '\n';
};

void Cat::print() const {
    std::cout << this->animalType << "[" << this->animalName << ", " << this->breed << ", " << this->animalWeight <<
            ", " << this->livingRegion << ", " << this->foodEaten << "]\n";
}

void Cat::eat(Food &f) {
    this->foodEaten = f._quantity;
}
