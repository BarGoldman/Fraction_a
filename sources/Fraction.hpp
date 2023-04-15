#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;

namespace ariel
{
};

class Fraction
{
private:
    int _numerator;
    int _denominator;

public:
    // constructor
    Fraction(const int ml, const int mr) : _numerator(ml), _denominator(mr){};
    // ~Fraction(){};

    // All operators should work on both sides on fractions and floats type variables.

    // The + operator to add two fractions and return their sum as another fraction in reduced form.
    Fraction operator+(const Fraction &other) const;
    friend Fraction operator+(const Fraction &other, float num);
    friend Fraction operator+(float num, const Fraction &other);

    // The - operator to subtract two fractions and return their difference as another fraction in reduced form.
    Fraction operator-(const Fraction &other) const;
    friend Fraction operator-(const Fraction &other, float num);
    friend Fraction operator-(float num, const Fraction &other);

    // The * operator to multiply two fractions and return their product as another fraction in reduced form.
    Fraction operator*(const Fraction &other) const; // a * b
    friend Fraction operator*(const Fraction &other, float num);
    friend Fraction operator*(float num, const Fraction &other);

    // The / operator to divide two fractions and return their quotient as another fraction in reduced form.
    Fraction operator/(const Fraction &other) const;
    friend Fraction operator/(const Fraction &other, float num);
    friend Fraction operator/(float num, const Fraction &other);

    //The == operator to compare two fractions for equality and return true or false.
    bool operator==(const Fraction &other) const;
    friend bool operator==(const Fraction &other, float num);
    friend bool operator==(float num, const Fraction &other);

    // All comparison operations (>,<,>=,<=)
    //  >
    bool operator>(const Fraction &other) const;
    friend bool operator>(const Fraction &other, float num);
    friend bool operator>(float num, const Fraction &other);

    // <
    bool operator<(const Fraction &other) const;
    friend bool operator<(const Fraction &other, float num);
    friend bool operator<(float num, const Fraction &other);

    // >=
    bool operator>=(const Fraction &other) const;
    friend bool operator>=(const Fraction &other, float num);
    friend bool operator>=(float num, const Fraction &other);

    // <=
    bool operator<=(const Fraction &other) const;
    friend bool operator<=(const Fraction &other, float num);
    friend bool operator<=(float num, const Fraction &other);

    // The ++ and -- operator that adds (or substracts) 1 to the fraction. implement both pre and post fix.

    // prefix increment:
    Fraction &operator--()
    {

        _numerator = _numerator - _denominator;
        return *this;
    }

    // postfix increment:
    Fraction operator--(int)
    {
        Fraction tmp(*this);
        --(*this);
        return tmp;
    }

    // prefix increment:
    Fraction &operator++()
    {
        _numerator = _numerator + _denominator;
        return *this;
    }

    // postfix increment:
    Fraction operator++(int)
    {
        Fraction tmp(*this);
        ++(*this);
        return tmp;
    }

    // The << operator to print a fraction to an output stream in the format “numerator/denominator”.
    friend ostream &operator<<(ostream &output, const Fraction &other);

    // The >> operator to read a fraction from an input stream by taking two integers as input.
    friend istream &operator>>(istream &input, const Fraction &other);
};

#endif
