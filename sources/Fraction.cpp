#include "Fraction.hpp"
#include <algorithm>

namespace ariel
{
};


// constructor
Fraction::Fraction(const int num_erator, const int denominator){
    int ans = __gcd(num_erator, denominator);
    _numerator = num_erator / ans ;
    _denominator = denominator / ans;
};

// The + operator to add two fractions and return their sum as another fraction in reduced form.
Fraction Fraction::operator+(const Fraction &other) const
{
    return Fraction(1, 2);
}

Fraction operator+(const Fraction &other, float num)
{
    return Fraction(1, 2);
}
Fraction operator+(float num, const Fraction &other)
{
    return Fraction(1, 2);
}

// The - operator to subtract two fractions and return their difference as another fraction in reduced form.
Fraction Fraction::operator-(const Fraction &other) const
{
    return Fraction(1, 2);
}
Fraction operator-(const Fraction &other, float num)
{
    return Fraction(1, 2);
}
Fraction operator-(float num, const Fraction &other)
{
    return Fraction(1, 2);
}

// The * operator to multiply two fractions and return their product as another fraction in reduced form.
Fraction Fraction::operator*(const Fraction &other) const
{
    return Fraction(1, 2);
}
Fraction operator*(const Fraction &other, float num)
{
    return Fraction(1, 2);
}
Fraction operator*(float num, const Fraction &other)
{
    return Fraction(1, 2);
}

// The / operator to divide two fractions and return their quotient as another fraction in reduced form.
Fraction Fraction::operator/(const Fraction &other) const
{
    return Fraction(1, 2);
}
Fraction operator/(const Fraction &other, float num)
{
    return Fraction(1, 2);
}
Fraction operator/(float num, const Fraction &other)
{
    return Fraction(1, 2);
}

// The == operator to compare two fractions for equality and return true or false.
bool Fraction::operator==(const Fraction &other) const
{
    return true;
}
bool operator==(const Fraction &other, float num)
{
    return true;
}
bool operator==(float num, const Fraction &other)
{
    return true;
}

// All comparison operations (>,<,>=,<=)
//  >
bool Fraction::operator>(const Fraction &other) const
{
    return true;
}

bool operator>(const Fraction &other, float num)
{
    return true;
}

bool operator>(float num, const Fraction &other)
{
    return true;
}

// <
bool Fraction::operator<(const Fraction &other) const
{
    return true;
}

bool operator<(const Fraction &other, float num)
{
    return true;
}

bool operator<(float num, const Fraction &other)
{
    return true;
}

// >=
bool Fraction::operator>=(const Fraction &other) const
{
    return true;
}
bool operator>=(const Fraction &other, float num)
{
    return true;
}
bool operator>=(float num, const Fraction &other)
{
    return true;
}

// <=
bool Fraction::operator<=(const Fraction &other) const
{
    return true;
}
bool operator<=(const Fraction &other, float num)
{
    return true;
}
bool operator<=(float num, const Fraction &other)
{
    return true;
}

// The << operator to print a fraction to an output stream in the format “numerator/denominator”.
ostream &operator<<(ostream &output, const Fraction &other)
{
    return (output << other._numerator << '/' << other._denominator);
}

// The >> operator to read a fraction from an input stream by taking two integers as input.
istream &operator>>(istream &input, Fraction &other)
{
    return input;
}