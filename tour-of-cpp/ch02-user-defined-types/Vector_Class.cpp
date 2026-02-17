//
// Created by ahmad.akra on 2/17/2026.
//

#include "vector_class.h"

Vector_Class::Vector_Class(int s)
        : elem{new double[s]}, sz{s} {}

Vector_Class::~Vector_Class()
{
    delete[] elem;
}

double& Vector_Class::operator[](int i)
{
    return elem[i];
}

int Vector_Class::size() const
{
    return sz;
}

