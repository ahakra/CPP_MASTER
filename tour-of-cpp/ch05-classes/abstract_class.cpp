#include  <iostream>
#include "abstract_class.h"



void use(Container& c)
{
    using namespace std;
    const int sz =c.size();
    for(int i=0;i!=sz;++i)
        cout << c[i]<<"\n";
}


SingleContainer::SingleContainer(int s) : sz{s}, data{new double[s]} {}
SingleContainer::~SingleContainer() { delete[] data; }

double& SingleContainer::operator[](int i) { return data[i]; }
int SingleContainer::size() const { return sz; }