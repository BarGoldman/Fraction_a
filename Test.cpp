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
    CHECK(Fraction(0,6));
    CHECK(Fraction(0,-6));
    CHECK(z == Fraction(0, 6));
}

TEST_CASE("")
{

    // test for +
    CHECK(a + b == Fraction(7, 3));
    CHECK(b + a == Fraction(7, 3));
    CHECK(c + d == Fraction(11, 15));
    CHECK(d + c == Fraction(11, 15));
    CHECK(a + c == Fraction(2,0));
    CHECK(d + a == Fraction(31,15));
    CHECK(c + b == Fraction(1,0));
    CHECK(d + b == Fraction(16,15));

    CHECK(z + b == Fraction(2,3));

    // test for -

    CHECK(a - b == Fraction(1,0));

    CHECK(b - a == Fraction(-1,0));
    CHECK(c - d == Fraction(11, 15));
    CHECK(d - c == Fraction(11, 15));
    CHECK(a - c == Fraction(2, 0));
    CHECK(d - a == Fraction(31, 15));
    CHECK(c - b == Fraction(1, 0));
    CHECK(d - b == Fraction(16, 15));

    CHECK(z - b == Fraction(-2, 3));

    // test for *
    // test for /
}

TEST_CASE("All comparison operations ")
{

    // test for ==

    // test for >
    // test for <
    // test for >=
    // test for <=
}

TEST_CASE("")
{

    // test for ++

    // test for --
}

TEST_CASE("")
{

    // test for <<

    // test for >>
}
