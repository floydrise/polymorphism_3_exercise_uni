//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_ANIMAL_H
#define UNI_WORK_ANIMAL_H
#include <string>
#include <utility>

#include "Food.h"


class Animal {
protected:
    std::string animalName;
    std::string animalType;
    double animalWeight;
    int foodEaten;

    Animal(std::string _animalName, std::string _animalType, double _animalWeight,
           int _foodEaten);

public:
    virtual ~Animal() = default;

    virtual void makeSound() {
    };

    virtual void eat(Food &f) {
    };

    virtual void print() const {
    };
};


#endif //UNI_WORK_ANIMAL_H
