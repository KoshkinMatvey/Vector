#include <iostream>
#include <exception>
#include "Vector.h"
using namespace std;

Vector::Vector(double* _nums, int _size) {
    this->nums = new double[_size];
    for (int i = 0; i < _size; i++) this->nums[i] = _nums[i];
    this->size = _size;
}

Vector::Vector(const Vector& a) {
    this->nums = new double[a.size];
    this->size = a.size;
    for (int i = 0; i < this->size; i++) this->nums[i] = a.nums[i];
}

Vector::~Vector() {
    delete[] this->nums;
}


double Vector::operator[](size_t i) {
    return this->nums[i];
}

double Vector::operator*(const Vector& a) {
    if (this->size != a.size) throw std::invalid_argument("Vects should have the same sizes");
    double amount = 0;
    for (int i = 0; i < this->size; i++) {
        amount += this->nums[i] * a.nums[i];
    }
    return amount;
}

ostream& operator<<(ostream& out, const Vector& a) {
    for (int i = 0; i < a.size; i++) cout << a.nums[i] << " ";
    return out;
}
