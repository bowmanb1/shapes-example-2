//
// Created by 13bra on 4/26/2020.
//

#ifndef SHAPES_EXAMPLE_1_EQUILATERAL_H
#define SHAPES_EXAMPLE_1_EQUILATERAL_H

#include "shape.h"
#include "triangle.h"
#include <string>

using std::string;

class Equilateral : public Triangle {
public:
    Equilateral(double a);
    virtual string ToString()const;
};


#endif //SHAPES_EXAMPLE_1_EQUILATERAL_H
