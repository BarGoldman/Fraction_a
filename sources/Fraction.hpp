#pragma once

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
    Fraction(const int ml, const int mr):_numerator(ml) , _denominator(mr){};
    ~Fraction();


    //All operators should work on both sides on fractions and floats type variables. 

    // The + operator to add two fractions and return their sum as another fraction in reduced form.
    Fraction operator+(const Fraction &other) const;
    friend Fraction operator+(const Fraction &other, double num);
    friend Fraction operator+(double num, const Fraction &other);

    //The - operator to subtract two fractions and return their difference as another fraction in reduced form.
    Fraction operator-(const Fraction &other) const;
    friend Fraction operator-(const Fraction &other, double num);
    friend Fraction operator-(double num, const Fraction &other);

    //The * operator to multiply two fractions and return their product as another fraction in reduced form.
    Fraction operator*(const Fraction &other) const; // a * b
    friend Fraction operator*(const Fraction &other, double num);
    friend Fraction operator*(double num, const Fraction &other);

    

    friend std::ostream &operator<<(std::ostream &output, const Fraction &c);
    Fraction operator/(const Fraction &other) const;
    


    friend Fraction operator* (double num, const Fraction& c2);
    friend Fraction operator- (const Fraction& c2,double num);

    friend bool operator> (const Fraction& c2,double num);


    // overloading equality operators
    bool operator==(const Fraction &other) const;
    // bool operator>(const Fraction &other) const;
    bool operator<(const Fraction &other) const;
    bool operator<=(const Fraction &other) const;
    bool operator>=(const Fraction &other) const;

    friend bool operator>(const Fraction& c1, const Fraction& c2);

    //     Fraction operator*(double num) const;
    //     // Fraction operator<<(const Fraction &other) const;
    //     double m_l() const
    //     {
    //         return m_l;
    //     }

    //     double m_r() const
    //     {
    //         return m_r;
    //     }

    Fraction &operator--()
    {
        _numerator -= _denominator;
        return *this;
    }

    Fraction operator--(int)
    {
        Fraction tmp(*this);
        --(*this);
        return tmp;
    }

    Fraction &operator++()
    {
        _numerator += _denominator;
        return *this;
    }

    Fraction operator++(int)
    {
        Fraction tmp(*this);
        ++(*this);
        return tmp;
    }

//     // Fraction operator--()
//     // {
//     //     Fraction copy = *this;
//     //     m_l--;
//     //     return copy;
//     // }

//     // Fraction &operator--()
//     // {
//     //     m_l -= m_r;
//     //     return *this;
//     // }


//     // 26

    // friend Fraction operator*(const Fraction& c1, const Fraction& c2);
    // friend Fraction operator+(const Fraction& c1, const Fraction& c2);

    //friend Fraction operator* (const Fraction& other1, const Fraction& other2); // 2.3*b
//     friend bool operator>(const Fraction& c1, const Fraction& c2);
//    bool operator>=(const Fraction &other) const;


    friend ostream &operator<<(ostream &output, const Fraction &other);
};
