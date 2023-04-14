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
Fraction ab(7, 3);

Fraction c(1, 3);
Fraction d(12, 30);
Fraction cd(11,15);

Fraction e(1,40);
Fraction f(6, 1);
Fraction ab(241,40);

Fraction g(1,4);
Fraction h(6, 6);
Fraction gh(5, 4);

TEST_CASE("The denominator will never equal 0"){
    CHECK_THROWS(Fraction(6, 0));
}

TEST_CASE("")
{

    // test for +
    CHECK(a + b == ab);
    CHECK(b + a == ab);

    // test for -
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
