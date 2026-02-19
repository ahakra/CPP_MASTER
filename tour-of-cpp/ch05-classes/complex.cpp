//
// Created by ahmad.akra on 2/19/2026.
//

#include "complex.h"


complex::complex(double r, double i) : re{r}, im{i} {}
complex::complex(double r) : re{r}, im{0} {}
complex::complex() : re{0}, im{0} {}

double complex::real() const { return re; }
void complex::real(double d) { re = d; }
double complex::imag() const { return im; }
void complex::imag(double d) { im = d; }

complex& complex::operator+=(complex z)
{
    re += z.re;
    im += z.im;
    return *this;
}

complex& complex::operator-=(complex z)
{
    re -= z.re;
    im -= z.im;
    return *this;
}

complex& complex::operator*=(complex z)
{
    // (a+bi)(c+di) = (ac-bd) + (ad+bc)i
    double new_re = re * z.re - im * z.im;
    double new_im = re * z.im + im * z.re;
    re = new_re;
    im = new_im;
    return *this;
}

complex& complex::operator/=(complex z)
{
    // (a+bi)/(c+di) = [(ac+bd) + (bc-ad)i] / (c²+d²)
    double denom = z.re * z.re + z.im * z.im;
    double new_re = (re * z.re + im * z.im) / denom;
    double new_im = (im * z.re - re * z.im) / denom;
    re = new_re;
    im = new_im;
    return *this;
}