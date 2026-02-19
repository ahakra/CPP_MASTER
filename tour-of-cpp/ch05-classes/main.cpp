//
// Created by ahmad.akra on 2/19/2026.
//
#include "complex.h"
#include "abstract_class.h"

void f(complex z)
{
    complex a {2.3};
    complex ss{1,2.3} ;
    auto dd = z*ss;
    complex c {a+z*ss};

}

int main()
{
    complex z {2.3,5};
    f(z);

    SingleContainer sc{5};
    sc[0] = 1.1;
    sc[1] = 2.2;
    use(sc);
}