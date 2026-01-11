//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_MOUSE_H
#define UNI_WORK_MOUSE_H
#include "Mammal.h"


class Mouse : public Mammal {
public:
    Mouse(std::string _animalName, std::string _animalType, double _animalWeight,
          int _foodEaten, std::string _livingRegion);

    void makeSound() override;

    void eat(Food &f) override;
    void print() const override;
};


#endif //UNI_WORK_MOUSE_H
