#pragma once
class Fraction {
private:
	int num_;
	int den_;
	void Reduce();
public:
	Fraction() {
		num_ = 0;
		den_ = 1;
	}
	Fraction(int num, int den);
	explicit operator double() const;

	int GetNumerator() { return num_; }
	int GetDenominator() { return den_; }

	void Set(int num, int den);

	void Input();
	void Print();

	friend const Fraction operator +(const Fraction& firstFraction, const Fraction& secondFraction);
	friend const Fraction operator -(const Fraction& firstFraction, const Fraction& secondFraction);
	friend const Fraction operator *(const Fraction& firstFraction, const Fraction& secondFraction);
	friend const Fraction operator /(const Fraction& firstFraction, const Fraction& secondFraction);
};

int GCD(int a, int b);