//
// Created by Stefan Petrov on 11.01.26.
//

#include "Mammal.h"

Mammal::Mammal(std::string _animalName, std::string _animalType, double _animalWeight, int _foodEaten,
               std::string _livingRegion) : Animal(std::move(_animalName), std::move(_animalType), _animalWeight,
                                                   _foodEaten), livingRegion{std::move(_livingRegion)} {
}
