//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_MAMMAL_H
#define UNI_WORK_MAMMAL_H
#include <utility>

#include "Animal.h"


class Mammal : public Animal {
protected:
    std::string livingRegion;

public:
    Mammal(std::string _animalName, std::string _animalType, double _animalWeight,
           int _foodEaten, std::string _livingRegion);
};

#endif //UNI_WORK_MAMMAL_H
