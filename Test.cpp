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

Fraction e(20, 40);
Fraction f(15, 35);

Fraction g(90, 36);
Fraction h(86, 14);

Fraction i(1, 2);
Fraction j(1, 4);
Fraction z(0, 11);

TEST_CASE("The denominator will never equal 0")
{
    CHECK_THROWS(Fraction(6, 0));
    CHECK_THROWS(Fraction(-6, 0));
    CHECK_THROWS(Fraction(0, 0));
}

TEST_CASE("The numerator can be equal to 0")
{
    CHECK_NOTHROW(Fraction(0, 6));
    CHECK_NOTHROW(Fraction(0, -6));
}

// ----------------------------------------- Test for operators + , - , * ,/ ----------------------
TEST_CASE("SIMPEL TEST - two Fraction")
{
    // test for +
    CHECK(a + b == Fraction(7, 3));
    CHECK(b + a == Fraction(7, 3));
    CHECK(c + d == Fraction(11, 15));
    CHECK(d + c == Fraction(11, 15));

    CHECK(i + j == Fraction(3, 4));
    CHECK(i + j == Fraction(6, 8));
    CHECK(z + b == Fraction(2, 3)); // 0 + b

    // test for -
    CHECK(a - b == Fraction(1, 1));
    CHECK(b - a == Fraction(-1, 1));
    CHECK(c - d == Fraction(-1, 15));
    CHECK(d - c == Fraction(1, 15));
    CHECK(z - b == Fraction(-2, 3)); // 0 - b

    // test for *
    CHECK(a * b == Fraction(10, 9));
    CHECK(b * a == Fraction(10, 9));
    CHECK(c * d == Fraction(2, 15));
    CHECK(d * c == Fraction(2, 15));

    // test for /
    CHECK(a / b == Fraction(5, 2));
    CHECK(b / a == Fraction(2, 5));
    CHECK(c / d == Fraction(5, 6));
    CHECK(d / c == Fraction(6, 5));
    CHECK(b / b == Fraction(1, 1));
}

TEST_CASE("Fraction with 0")
{

    // test for +
    CHECK_NOTHROW(0 + b); // 0 + b
    CHECK_NOTHROW(0 + z);

    // test for -
    CHECK_NOTHROW(0 - b); // 0 - b
    CHECK_NOTHROW(0 - z);
    // test for *
    CHECK_NOTHROW(0 * b);
    CHECK_NOTHROW(0 * z);

    // test for /
    CHECK_THROWS(b / 0);
    CHECK_THROWS(b / z);
    CHECK_NOTHROW(0 / b);
    CHECK_NOTHROW(0.002 / b);
    CHECK_NOTHROW(b / 0.002);
}

TEST_CASE("Fraction with Decimal number")
{

    // test for +
    CHECK(c + 3.2 == Fraction(53, 15));
    CHECK(a + 2.421 == Fraction(12263, 3000));
    CHECK(3.2 + c == Fraction(53, 15));
    CHECK(3 + c == Fraction(10, 3));
    CHECK(i + 0.25 == Fraction(3, 4));
    CHECK(0.25 + i == Fraction(3, 4));

    // test for -
    CHECK(b - 3.2 == Fraction(-38, 15));
    CHECK(3.2 - b == Fraction(38, 15));
    CHECK(d - 2.421 == Fraction(-2021, 1000));

    CHECK(i - 0.25 == Fraction(1, 4));
    CHECK(0.25 - i == Fraction(-13, 50));

    // test for *
    CHECK(b * 3.2 == Fraction(32, 15));
    CHECK(3.2 * b == Fraction(32, 15));
    CHECK(d * 2.421 == Fraction(2421, 2500));

    // test for /
    CHECK(3.2 / b == Fraction(24, 5));
    CHECK(d / 2.421 == Fraction(400, 2421));
    CHECK(b / 3.2 == Fraction(5, 24));
    CHECK(b / 0.222 == Fraction(1000, 333));
}

// ----------------------------------------- Test for operators < , > , <= ,=> ----------------------
TEST_CASE("All comparison operations ")
{
    // test for >
    CHECK(Fraction(1, 3) > Fraction(1, 100));
    CHECK(Fraction(1, 3) > Fraction(0, 100));
    CHECK(Fraction(1, 3) > 0);
    CHECK(Fraction(1, 3) > -1);
    CHECK(1 > Fraction(1, 3));
    CHECK(Fraction(1, 3) > Fraction(-1, 3));
    

    // test for <
    CHECK(Fraction(1, 100) < Fraction(1, 3));
    CHECK(0 < Fraction(1, 3));
    CHECK(-1 < Fraction(1, 3));
    CHECK(Fraction(1, 3) < 1);
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
// ------------------------------------ TEST for ++ and -- operator --------------------------
TEST_CASE("postfix")
{
    // test for ++
    CHECK(a++ == Fraction(5, 3));
    CHECK(b++ == Fraction(2, 3));

    // test for --
    CHECK(c-- == Fraction(1, 3));
    CHECK(d-- == Fraction(2, 5));
}

TEST_CASE("prefix")
{

    // test for ++
    CHECK(++e == Fraction(2, 3));
    CHECK(++f == Fraction(10, 7));

    // test for --
    CHECK(--g == Fraction(3, 2));
    CHECK(--h == Fraction(36, 7));
}

TEST_CASE("Reduced Form")
{
    CHECK(Fraction(3, 4) == Fraction(6, 8));
    CHECK(e == Fraction(1, 2));
    CHECK(f == Fraction(3, 7));
    CHECK(g == Fraction(5, 2));
    CHECK(h == Fraction(43, 7));
}