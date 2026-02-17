#include <complex.h>

//
// Created by ahmad.akra on 2/17/2026.
//
//const — value is fixed at runtime (can be computed while the program runs)
//constexpr — value is fixed at compile time (must be computable before the program
//const = promise not to modify it (whenever it gets its value)
//constexpr = promise it exists before the program even starts

#include <vector>
constexpr double square(double x ) {return x*x;};
void intialization_demo()
{
    using namespace  std;
    constexpr double d1 = 2.3;
    double d2 {2.3};
    double d3 = {2.3};

    complex<double > z= {d1,d2};
    vector<int> v {2,2,3,34,45};

    auto b = true;

    constexpr  double max1 = 1/5*square(17);
    constexpr  double max2 = 1/5*square(d1);

    const double s1 = square(3.2);
}