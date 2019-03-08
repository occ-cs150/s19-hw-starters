/**
    @file h19.h
    @author Stephen Gilbert
    @version Spring 2019
*/
#ifndef H19_H_
#define H19_H_
#include <iostream>
#include <string>

class Fraction
{
public:
    Fraction() = default;
    Fraction(int n);
    Fraction(int n, int d);

    Fraction& operator+=(const Fraction& rhs);
    Fraction& operator-=(const Fraction& rhs);
    Fraction& operator*=(const Fraction& rhs);
    Fraction& operator/=(const Fraction& rhs);

    std::string toString() const;

private:
    int numerator_ = 0;
    int denominator_ = 1;
};

std::ostream& operator<<(std::ostream& out, const Fraction& f);

const Fraction operator+(const Fraction& lhs, const Fraction& rhs);
const Fraction operator-(const Fraction& lhs, const Fraction& rhs);
const Fraction operator*(const Fraction& lhs, const Fraction& rhs);
const Fraction operator/(const Fraction& lhs, const Fraction& rhs);

#endif
