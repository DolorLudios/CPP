#pragma once
#include <iostream>

class Shape {
public:
	double virtual Area() const = 0;
	double virtual Perimeter() const = 0;
	void virtual Display() const = 0;
};

class Rectangle : public Shape {
public:
	Rectangle(double side1, double side2);
	double virtual Area() const override;
	double virtual Perimeter() const override;
	void virtual Display() const override;
protected:
	double side1;
	double side2;
};

class Square : public Rectangle {
public:
	Square(double side);
	double virtual Area() const override;
	double virtual Perimeter() const override;
	void virtual Display() const override;
};

class Ellipse : public Shape {
public:
	Ellipse(double semi_major_axis, double semi_minor_axis);
	double virtual Area() const override;
	double virtual Perimeter() const override;
	void virtual Display() const override;
protected:
	double semi_major_axis;
	double semi_minor_axis;
};

class Circle : public Ellipse {
public:
	Circle(double radius);
	double virtual Area() const override;
	double virtual Perimeter() const override;
	void virtual Display() const override;
 };