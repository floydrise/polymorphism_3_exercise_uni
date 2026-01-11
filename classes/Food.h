//
// Created by Stefan Petrov on 11.01.26.
//

#ifndef UNI_WORK_FOOD_H
#define UNI_WORK_FOOD_H


class Food {
public:
    int _quantity;

    explicit Food(int quantity);

    virtual ~Food() = default;

    virtual void print_quantity();
};


#endif //UNI_WORK_FOOD_H
