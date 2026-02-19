//
// Created by ahmad.akra on 2/19/2026.
//

#ifndef TOUR_OF_CPP_ABSTRACT_CLASS_H
#define TOUR_OF_CPP_ABSTRACT_CLASS_H


class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;
    virtual ~Container() {}
};

void use(Container& c);

class SingleContainer : public Container {
    double* data;
    int sz;
public:
    SingleContainer(int s);
    ~SingleContainer();

    double& operator[](int i) override;
    int size() const override;
};

#endif //TOUR_OF_CPP_ABSTRACT_CLASS_H
