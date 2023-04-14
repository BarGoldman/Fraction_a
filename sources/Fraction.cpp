#include "Fraction.hpp"

namespace ariel
{};

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
    bool operator>=(float num, const Fraction &other);

    // <=
    bool operator<=(const Fraction &other){
        return true;
    }   
    bool operator<=(const Fraction &other, float num){
        return true;
    }
    bool operator<=(float num, const Fraction &other){
        return true;
    }

    // The << operator to print a fraction to an output stream in the format “numerator/denominator”.
    ostream &operator<<(ostream &output, const Fraction &other){
        return output;
    }

    // The >> operator to read a fraction from an input stream by taking two integers as input.
    istream &operator>>(istream &input, const Fraction &other){
        return input;
    }