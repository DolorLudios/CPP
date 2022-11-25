#include <iostream>
#include "shapes.h"

Rectangle::Rectangle(double side1, double side2) : side1{ side1 }, side2{ side2 }
{
    if (side1 < 0 or side2 < 0) {
        throw std::logic_error("Sides can't be negative numbers");
    }
}

double Rectangle::Area() const
{
    return side1 * side2;
}

double Rectangle::Perimeter() const
{
    return 2 * (side1 + side2);
}

void Rectangle::Display() const
{
    std::cout << "Perimeter: " << Perimeter() << std::endl;
    std::cout << "Area: " << Perimeter() << std::endl;
}




Square::Square(double side) : Rectangle(side, side)
{
    if (side < 0) {

        throw std::logic_error("side can't be negative number");
    }
}

double Square::Area() const
{
    return Rectangle::Area();
}

double Square::Perimeter() const
{
    return Rectangle::Area();
}

void Square::Display() const
{
    std::cout << "Area: " << Area() << std::endl;
    std::cout << "Perimeter " << Perimeter() << std::endl;
}



Ellipse::Ellipse(double semi_major_axis, double semi_minor_axis) : semi_major_axis{ semi_major_axis }, semi_minor_axis{ semi_minor_axis }
{
    if (semi_major_axis < 0 or semi_minor_axis < 0) {

        throw std::logic_error("Semi-axis can't be negative numbers");
    }
}

double Ellipse::Area() const
{
    return 3, 14 * semi_major_axis * semi_minor_axis;
}

double Ellipse::Perimeter() const
{
    return 4 * ((3, 14 * semi_major_axis * semi_minor_axis + std::pow(semi_major_axis - semi_minor_axis, 2)) / (semi_minor_axis + semi_major_axis));
}

void Ellipse::Display() const
{
    std::cout << "Area: " << Area() << std::endl;
    std::cout << "Perimeter " << Perimeter() << std::endl;
}



Circle::Circle(double radius) : Ellipse(radius, radius)
{
    if (radius < 0) {

        throw std::logic_error("Radius can't be negative number");
    }
}

double Circle::Area() const
{
    return Ellipse::Area();
}

double Circle::Perimeter() const
{
    return Ellipse::Perimeter();
}

void Circle::Display() const
{
    std::cout << "Area: " << Area() << std::endl;
    std::cout << "Perimeter " << Perimeter() << std::endl;
}