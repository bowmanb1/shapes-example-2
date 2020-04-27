//
// Created by 13bra on 4/26/2020.
//

#include "Equilateral.h"

#include <string>
#include <sstream>

using std::string;
using std::stringstream;
using std::max;

Equilateral::Equilateral(double length) : Triangle(length, length, length) {

}

string Equilateral::ToString() const {
    stringstream retVal;
    retVal << "{Equilateral " << Triangle::ToString() << "}";
    return retVal.str();
}
