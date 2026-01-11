//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_FELINE_H
#define UNI_WORK_FELINE_H
#include "Mammal.h"


class Feline : public Mammal {
public:
    Feline(std::string _animalName, std::string _animalType, double _animalWeight,
           int _foodEaten, std::string _livingRegion);
};


#endif //UNI_WORK_FELINE_H
