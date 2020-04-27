//
// Created by 13bra on 4/26/2020.
//

#ifndef SHAPES_EXAMPLE_1_RHOMBUS_H
#define SHAPES_EXAMPLE_1_RHOMBUS_H

#include "shape.h"

#include <string>
using std::string;

class Rhombus : public Shape{
    double _length, _diagonalA, _diagonalB;
public:
    Rhombus(double length, double diagonalA, double diagonalB);
    virtual string ToString()const;
    virtual double Area()const;
    virtual double Perimeter()const;
};


#endif //SHAPES_EXAMPLE_1_RHOMBUS_H
