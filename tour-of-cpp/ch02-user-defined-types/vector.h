#pragma once

struct Vector
{
    double* elem;
    int     size;
};

void   vector_init(Vector& v, int s);
double read_and_sum(int s);