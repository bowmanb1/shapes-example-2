//
// Created by 13bra on 4/26/2020.
//

#include "Rhombus.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;

Rhombus::Rhombus(double length, double diagonalA, double diagonalB) : _length(length), _diagonalA(diagonalA), _diagonalB(diagonalB){

}

string Rhombus::ToString() const {
    stringstream retVal;
    retVal << "{Rhombus " << Shape::ToString() << " length: " << _length << ", diagonalA: " << _diagonalA << ", diagonalB: " << _diagonalB <<"}";
    return retVal.str();
}

double Rhombus::Area() const {
    return (_diagonalA * _diagonalB) / 2;
}

double Rhombus::Perimeter() const {
    return 4 * _length;
}