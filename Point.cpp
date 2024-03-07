#include "Point.hpp"
#include <iostream>
#include <cmath>

using namespace std;

Point::Point(float x_coordinate, float y_coordinate) {
    
    x = x_coordinate;
    y = y_coordinate;

}

void Point::pretty_print() {

    cout << "(" << x << ", " << y << ")" << endl;

}

double Point::operator-(Point p1) {

    double distance;

    distance = sqrt(pow((p1.x - x), 2) + pow((p1.y - y), 2));
    
    return distance;

}

bool Point::operator==(Point p1) {

    if (x == p1.x && y == p1.y) {
        return true;
    }

    else {
        return false;
    }

}

bool Point::operator!=(Point p1) {

    if (x == p1.x && y == p1.y) {
        return false;
    }

    else {
        return true;
    }

}

Point Point::operator/(Point p1) {

    double midx = 0.5 * (x + p1.x);

    double midy = 0.5 * (y + p1.y);

    return Point(midx, midy);

}

Point Point::operator*(double c) {

    double mult_x = c * x;
    
    double mult_y = c * y;

    return Point(mult_x, mult_y);

}

