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
    Fraction(const double& ml= 0.0,
             const double& mr= 0.0);
    ~Fraction();
};

Fraction::Fraction(const double& ml= 0.0,
             const double& mr= 0.0):m_l(ml) , m_r(mr)
{
}

Fraction::~Fraction()
{
}
