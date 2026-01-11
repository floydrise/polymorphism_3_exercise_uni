//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_VEGETABLE_H
#define UNI_WORK_VEGETABLE_H
#include "Food.h"


class Vegetable final : public Food {
public:
    explicit Vegetable(const int quantity) : Food(quantity) {
    };
};


#endif //UNI_WORK_VEGETABLE_H
