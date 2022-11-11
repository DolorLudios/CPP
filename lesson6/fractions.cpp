#include "fractions.h"
#include <iostream>

using namespace std;

int GCD(int a, int b) {
    if (a == b)
        return a;
    else if (a > b)
        return GCD(a - b, b);
    else
        return GCD(a, b - a);
}
void Fraction::Reduce() {
    int gcd = GCD(num_, den_);
    if (!gcd) return;
    else {
        num_ /= gcd;
        den_ /= gcd;
    }
}
void Fraction::Set(int num, int den) {
    if (den != 0) {
        num_ = num;
        den_ = den;
        Reduce();
    }
    else {
        cout << "Can't divide by 0" << endl;
        exit(0);
    }
}
Fraction::Fraction(int num, int den) {
    Set(num, den);
}
const Fraction operator +(const Fraction& left, const Fraction& right) {
    int num = (left.num_ * right.den_) + (right.num_ * left.den_);
    int den = left.den_ * right.den_;
    return Fraction(num, den);
}

const Fraction operator -(const Fraction& left, const Fraction& right) {
    int num = (left.num_ * right.den_) - (right.num_ * left.den_);
    int den = left.den_ * right.den_;
    return Fraction(num, den);
}

const Fraction operator *(const Fraction& left, const Fraction& right) {
    int num = left.num_ * right.num_;
    int den = left.den_ * right.den_;
    return Fraction(num, den);
}

const Fraction operator /(const Fraction& left, const Fraction& right) {
    int num = left.num_ * right.den_;
    int den = left.den_ * right.num_;
    return Fraction(num, den);
}
Fraction::operator double() const {
    return (double(num_) / double(den_));
}
void Fraction::Input() {
    cout << "Enter num and den of a fraction: ";
    int num, den;
    cin >> num;
    cin >> den;
    Set(num, den);
}
void Fraction::Print() {
    cout << num_ << "/" << den_ << endl;
}
