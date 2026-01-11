//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_CAT_H
#define UNI_WORK_CAT_H
#include "Feline.h"


class Cat : public Feline {
public:
    std::string breed;

    Cat(std::string _animalName, std::string _animalType, double _animalWeight,
        int _foodEaten, std::string _livingRegion, std::string _breed);

    void makeSound() override;
    void print() const override;
    void eat(Food &f) override;
};

#endif //UNI_WORK_CAT_H
