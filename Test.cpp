#include "sources/Fraction.hpp"
#include "doctest.h"
using namespace ariel;

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

Fraction a(5, 3);
Fraction b(14, 21);

Fraction c(1, 3);
Fraction d(12, 30);

Fraction e(1, 40);
Fraction f(6, 1);
Fraction ef(241, 40);

Fraction g(1, 4);
Fraction h(6, 6);
Fraction gh(5, 4);

Fraction z(0,11);

TEST_CASE("The denominator will never equal 0")
{
    CHECK_THROWS(Fraction(6, 0));
    CHECK_THROWS(Fraction(-6, 0));
    CHECK_THROWS(Fraction(0, 0));
}
TEST_CASE("The numerator can be equal to 0")
{
    CHECK_NOTHROW(Fraction(0,6));
    CHECK_NOTHROW(Fraction(0,-6));
}

TEST_CASE("Test for operators + , - , * ,/")
{
    // test for +
    CHECK(a + b == Fraction(7, 3));
    CHECK(b + a == Fraction(7, 3));
    CHECK(c + d == Fraction(11, 15));
    CHECK(d + c == Fraction(11, 15));
    CHECK(z + b == Fraction(2,3));

    CHECK(c+3.2 == Fraction(53,15));
    CHECK(a+2.421 == Fraction(12263,3000));
    CHECK(3.2+c == Fraction(16,15));

    // test for -
    CHECK(a - b == Fraction(1,0));
    CHECK(b - a == Fraction(-1,0));
    CHECK(c - d == Fraction(-1,15));
    CHECK(d - c == Fraction(1,15));
    CHECK(z - b == Fraction(-2, 3));

    CHECK(b-3.2 == Fraction(-38,15));
    CHECK(3.2-b == Fraction(38,15));
    CHECK(d-2.421 == Fraction(-2021,1000));

    // test for *
    CHECK(a * b == Fraction(10,9));
    CHECK(b * a == Fraction(10,9));
    CHECK(b * a == a * b);
    CHECK(c * d == Fraction(2,15));
    CHECK(d * c == Fraction(2,15));
    CHECK(z * b == Fraction(0, 3));

    CHECK(b*3.2 == Fraction(32,15));
    CHECK(b*0 == Fraction(0,15));
    CHECK(3.2*b == Fraction(32,15));
    CHECK(d*2.421 == Fraction(2421,2500));

    // test for /
    CHECK(a * b == Fraction(10, 9));
    CHECK(b * a == Fraction(10, 9));
    CHECK(b * a == a * b);
    CHECK(c * d == Fraction(2, 15));
    CHECK(d * c == Fraction(2, 15));
    CHECK(z * b == 0);

    CHECK(b / 3.2 == Fraction(5,24));
    CHECK_THROWS(b / 0);
    CHECK(b / b == Fraction(1,1));
    CHECK(3.2 / b == Fraction(24,5));
    CHECK(d / 2.421 == Fraction(400,2421));
}

TEST_CASE("All comparison operations ")
{
    // test for >
    CHECK(Fraction(1, 3) > Fraction(1, 100));
    CHECK(Fraction(1, 3) > Fraction(0, 100));
    CHECK(Fraction(1, 3) > 0);
    CHECK(Fraction(1, 3) > -1);
    CHECK(Fraction(1, 3) > Fraction(-1, 3));

    // test for <
    CHECK(Fraction(1, 100) < Fraction(1, 3));
    CHECK(0 < Fraction(1, 3));
    CHECK(-1 < Fraction(1, 3));
    CHECK(Fraction(-1, 3) < Fraction(1, 3));

    // test for >=
    CHECK(Fraction(1, 3) >= Fraction(1, 100));
    CHECK(Fraction(1, 3) >= Fraction(1, 3));
    CHECK(Fraction(1, 3) >= 0);
    CHECK(Fraction(1, 3) >= -1);
    CHECK(Fraction(1, 3) >= Fraction(-1, 3));
    CHECK(Fraction(1, 2) >= 0.5);

    // test for <=
    CHECK(Fraction(1, 100) <= Fraction(1, 3));
    CHECK(0 <= Fraction(1, 3));
    CHECK(-1 <= Fraction(1, 3));
    CHECK(Fraction(-1, 3) <= Fraction(1, 3));
}

TEST_CASE("")
{
    // test for ++
    CHECK(a++ == Fraction(8,3));
    CHECK(b++ == Fraction(5,3));
    CHECK(c++ == Fraction(4,3));
    CHECK(d++ == Fraction(7,5));

    // test for --
    CHECK(a-- == Fraction(2,3));
    CHECK(b-- == Fraction(-1,3));
    CHECK(c-- == Fraction(-2,3));
    CHECK(d-- == Fraction(-3,5));
}

TEST_CASE("")
{
    // // test for <<
    // ostringstream output;
    // output << a;
    // CHECK(output.str() == "5/3");

    // // test for >>
    // istringstream input;
    // a >> input;

}