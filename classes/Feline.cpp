//
// Created by Stefan Petrov on 11.01.26.
//

#include "Feline.h"

#include <utility>

Feline::Feline(std::string _animalName, std::string _animalType, double _animalWeight, int _foodEaten,
               std::string _livingRegion) : Mammal(std::move(_animalName), std::move(_animalType), _animalWeight,
                                                   _foodEaten, std::move(_livingRegion)) {
}
