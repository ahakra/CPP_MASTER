#pragma once

class Vector_Class
{
public:
    explicit Vector_Class(int s);   // explicit = no accidental implicit conversions
    ~Vector_Class();                // destructor

    Vector_Class(const Vector_Class& other);              // copy constructor
    Vector_Class& operator=(const Vector_Class& other);   // copy assignment
    Vector_Class(Vector_Class&& other) noexcept;          // move constructor
    Vector_Class& operator=(Vector_Class&& other) noexcept; // move assignment

    double& operator[](int i);
    int     size() const;           // const — doesn't modify the object

private:
    double* elem;
    int     sz;
};