//
// Created by Stefan Petrov on 11.01.26.
//

#include "Animal.h"

Animal::Animal(std::string _animalName, std::string _animalType, double _animalWeight, int _foodEaten) : animalName{
        std::move(_animalName)
    }, animalType{std::move(_animalType)},
    animalWeight{_animalWeight}, foodEaten{_foodEaten} {
}
