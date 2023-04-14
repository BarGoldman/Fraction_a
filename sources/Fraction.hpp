#pragma once

namespace ariel
{
};

class Fraction
{
private:
    double m_l;
    double m_r;

public:
    Fraction(const double &ml,const double &mr);
    ~Fraction();
    Fraction operator+(const Fraction &other) const;
    Fraction operator-(const Fraction &other) const;
    Fraction operator/(const Fraction &other) const;
    Fraction operator*(const Fraction &other) const;
    // Fraction operator<<(const Fraction &other) const;
    double m_l() const
    {
        return m_l;
    }

    double m_r() const
    {
        return m_r;
    }

    Fraction &operator--()
    {
        m_l -= m_r;
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
        m_l += m_r;
        return *this;
    }

    Fraction operator++(int)
    {
        Fraction tmp(*this);
        ++(*this);
        return tmp;
    }

    // Fraction operator--()
    // {
    //     Fraction copy = *this;
    //     m_l--;
    //     return copy;
    // }

    // Fraction &operator--()
    // {
    //     m_l -= m_r;
    //     return *this;
    // }


    // 26
    friend Fraction operator*(const Fraction &c1, const Fraction &c2);
    friend std::ostream &operator<<(std::ostream &output, const Fraction &c);
    friend bool operator>(const Fraction& c1, const Fraction& c2);
//    bool operator>=(const Fraction& other);
};
