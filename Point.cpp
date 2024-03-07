#include "Point.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(float x_coordinate, float y_coordinate) {
    
    x = x_coordinate;
    y = y_coordinate;

}

// Prints out a point to the console.
void Point::pretty_print() {

    cout << "(" << x << ", " << y << ")" << endl;

}

// Finds the distance between two points.
double Point::operator-(Point p1) {

    double distance;

    distance = sqrt(pow((p1.x - x), 2) + pow((p1.y - y), 2));
    
    return distance;

}

// Compares two points and returns true if they are the same.
bool Point::operator==(Point p1) {

    if (x == p1.x && y == p1.y) {
        return true;
    }

    else {
        return false;
    }

}

// Compares two points and returns true if they are different.
bool Point::operator!=(Point p1) {

    if (x == p1.x && y == p1.y) {
        return false;
    }

    else {
        return true;
    }

}

// Finding the midpoint between two points.
Point Point::operator/(Point p1) {

    double midx = 0.5 * (x + p1.x);

    double midy = 0.5 * (y + p1.y);

    return Point(midx, midy);

}

// Add-on One Credit
// Multiplying a point by a constant.
Point Point::operator*(double c) {

    double mult_x = c * x;
    
    double mult_y = c * y;

    return Point(mult_x, mult_y);

}

// Add-On Three Credits
// Returns the X or Y part of a point.
float Point::operator[](char coordinate) {

    if (coordinate == 'x' || coordinate == 'X') {
        return x;
    }

    else if (coordinate == 'y' || coordinate == 'Y') {
        return y;
    }
    
    else {
        throw out_of_range("Invalid entry, please specify x or y");
    }

}

