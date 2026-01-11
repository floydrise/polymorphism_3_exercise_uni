//
// Created by Stefan Petrov on 11.01.26.
//

#include "Food.h"

#include <iostream>

Food::Food(const int quantity) : _quantity{quantity} {
};

void Food::print_quantity() {
    std::cout << _quantity << '\n';
};
