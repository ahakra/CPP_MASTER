#include "vector.h"

void vector_init(Vector& v, int s)
{
    v.elem = new double[s];
    v.size = s;
}

double read_and_sum(int s)
{
    Vector v{};
    vector_init(v, s);

    for (int i = 0; i < v.size; i++)
        v.elem[i] = 2.3;

    double sum = 0;
    for (int i = 0; i < v.size; i++)
        sum += v.elem[i];

    delete[] v.elem;
    v.elem = nullptr;

    return sum;
}