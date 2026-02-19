//
// Created by ahmad.akra on 2/19/2026.
//

#ifndef TOUR_OF_CPP_COMPLEX_H
#define TOUR_OF_CPP_COMPLEX_H

class complex {
    double re, im;
public:
    complex(double r, double i);
    complex(double r);
    complex();

    double real() const;
    void real(double d);
    double imag() const;
    void imag(double d);

    complex& operator+=(complex z);
    complex& operator-=(complex z);
    complex& operator*=(complex z);
    complex& operator/=(complex z);
};
inline complex operator+(complex a, complex b) { return a += b; }
inline complex operator-(complex a, complex b) { return a -= b; }
inline complex operator*(complex a, complex b) { return a *= b; }
inline complex operator/(complex a, complex b) { return a /= b; }

#endif


