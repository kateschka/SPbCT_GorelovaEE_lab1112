#include <iostream>
using namespace std;

class Complex 
{
	float real;
	float imaginary;
public:
	Complex(float, float);
	Complex();
	friend float GetReal(Complex);
	friend float GetImaginary(Complex);
	void SetValue(float, float);
	void ToString(Complex&);
	bool operator ==(Complex&);
	bool operator !=(Complex&);
};

Complex::Complex(float r, float i)
{
	real = r;
	imaginary = i;
}
Complex::Complex()
{
	real = 0;
	imaginary = 0;
}
float GetReal(Complex z)
{
	return z.real;
}
float GetImaginary(Complex z) {
	return z.imaginary;
}
bool Complex::operator==(Complex& z)
{
	return (real == z.real) && (imaginary == z.imaginary);
}
bool Complex::operator!=(Complex& z)
{
	return (real != z.real) || (imaginary != z.imaginary);
}
void Complex::SetValue(float r, float i)
{
	this->real = r;
	this->imaginary = i;
}

void Complex::ToString(Complex& z)
{
	cout << z.real << "+" << z.imaginary << endl;
}
