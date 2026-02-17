#include <iostream>

// raw union — dangerous, no tracking of which member is active
union RawData
{
    int    i;
    float  f;
    char   c;
};

void raw_union_demo()
{
    RawData d;
    d.i = 42;
    std::cout << d.i << "\n";    // 42 — fine, i is active

    d.f = 3.14f;
    std::cout << d.f << "\n";    // 3.14 — fine, f is now active
    std::cout << d.i << "\n";    // garbage — i is no longer valid
    // reading inactive member = undefined behavior
}