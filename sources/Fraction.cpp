#include "Fraction.hpp"

namespace ariel
{
};

// The + operator to add two fractions and return their sum as another fraction in reduced form.
Fraction Fraction::operator+(const Fraction &other) const
{
    return Fraction(_numerator + other._numerator, _denominator + other._denominator);
}

Fraction operator+(const Fraction &other, float num)
{
    // float temp = (float)other._numerator / other._denominator + num;//6.5
    // temp = temp % 1000;
    // int denominatorNem = 
    // int numeratorNew = other._numerator / other._denominator + num;
    // return Fraction(numeratorNew, );
    return Fraction(1, 2);
}
Fraction operator+(float num, const Fraction &other)
{
    return Fraction(1, 2);
}

// The - operator to subtract two fractions and return their difference as another fraction in reduced form.
Fraction Fraction::operator-(const Fraction &other) const
{
    return Fraction(_numerator - other._numerator, _denominator - other._denominator);
}
Fraction operator-(const Fraction &other, float num){
    return Fraction(1, 2);
}
Fraction operator-(float num, const Fraction &other){
    return Fraction(1, 2);
}

// The * operator to multiply two fractions and return their product as another fraction in reduced form.
Fraction Fraction::operator*(const Fraction &other) const
{
    return Fraction(_numerator * other._numerator, _denominator * other._denominator);
}
Fraction operator*(const Fraction &other, float num){
    // float temp = (float)other._numerator / other._denominator * num; // 6.5
    // int numeratorNew = (int)temp;
    // temp = temp - numeratorNew;
    // int denominatorNem = temp;
    // return Fraction(numeratorNew,denominatorNem);
    return Fraction(1, 2);
}
Fraction operator*(float num, const Fraction &other){
    return Fraction(1, 2);
}

// The / operator to divide two fractions and return their quotient as another fraction in reduced form.
Fraction Fraction::operator/(const Fraction &other) const
{
    return Fraction(_numerator / other._numerator, _denominator / other._denominator);
}
Fraction operator/(const Fraction &other, float num){
    return Fraction(1, 2);
}
Fraction operator/(float num, const Fraction &other){
    return Fraction(1, 2);
}

const float TOLERANCE = 0.0001;
// The == operator to compare two fractions for equality and return true or false.
bool Fraction::operator==(const Fraction &other) const
{
    return (abs(_numerator - other._denominator) <= TOLERANCE && abs(_denominator - other._numerator) <= TOLERANCE);
    // return (_numerator - other._denominator == 0 && _denominator - other._numerator == 0);
}
bool operator==(const Fraction &other, float num)
{
    float temp = (float)other._numerator / other._denominator;
    return (temp == num);
}
bool operator==(float num, const Fraction &other)
{
    float temp = (float)other._numerator / other._denominator;
    return (temp == num);
}

// All comparison operations (>,<,>=,<=)
//  >
bool Fraction::operator>(const Fraction &other) const
{
    return (_numerator * other._denominator > _denominator * other._numerator);
}

bool operator>(const Fraction &other, float num)
{
    float temp = (float)other._numerator / other._denominator;
    return (temp > num);
}

bool operator>(float num, const Fraction &other)
{
    float temp = (float)other._numerator / other._denominator;
    return (num > temp);
}

// <
bool Fraction::operator<(const Fraction &other) const
{
    return (_numerator * other._denominator < _denominator * other._numerator);
}

bool operator<(const Fraction &other, float num)
{
    float temp = (float)other._numerator / other._denominator;
    return (temp < num);
}

bool operator<(float num, const Fraction &other)
{
    float temp = (float)other._numerator / other._denominator;
    return (num < temp);
}

// >=
bool Fraction::operator>=(const Fraction &other) const
{
    return (_numerator * other._denominator > _denominator * other._numerator ||
            abs(_numerator * other._denominator) <= TOLERANCE && abs(_denominator * other._numerator) <= TOLERANCE);
}
bool operator>=(const Fraction &other, float num)
{
    float temp = (float)other._numerator / other._denominator;
    return (temp >= num);
}
bool operator>=(float num, const Fraction &other)
{
    float temp = (float)other._numerator / other._denominator;
    return (num >= temp);
}

// <=
bool Fraction::operator<=(const Fraction &other) const
{
    return (_numerator * other._denominator < _denominator * other._numerator ||
            abs(_numerator * other._denominator) <= TOLERANCE && abs(_denominator * other._numerator) <= TOLERANCE);
}
bool operator<=(const Fraction &other, float num)
{
    float temp = (float)other._numerator / other._denominator;
    return (temp <= num);
}
bool operator<=(float num, const Fraction &other)
{
    float temp = (float)other._numerator / other._denominator;
    return (num <= temp);
}

// The << operator to print a fraction to an output stream in the format “numerator/denominator”.
ostream &operator<<(ostream &output, const Fraction &other)
{
    return (output << other._numerator << '/' << other._denominator);
}

// The >> operator to read a fraction from an input stream by taking two integers as input.
istream &operator>>(istream &input, const Fraction &other)
{
    return input;
}