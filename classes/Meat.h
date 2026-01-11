//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_MEAT_H
#define UNI_WORK_MEAT_H
#include "Food.h"


class Meat : public Food {
public:
    explicit Meat(int quantity) : Food(quantity) {
    };
};


#endif //UNI_WORK_MEAT_H
