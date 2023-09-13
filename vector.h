#include <iostream>
using namespace std;

class Vector {
private:
	double* nums;
	int size;

public:
	Vector(double* _nums, int size);
	Vector(const Vector& a);
	~Vector();

	double operator*(const Vector& a);
	double operator[](size_t i);
	friend ostream& operator<<(ostream& str, const Vector& a);
};
