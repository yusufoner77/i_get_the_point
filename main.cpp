#include <iostream>
#include "Point.hpp"

using namespace std;

int main() {

    Point p1 = Point(1,1);
    Point p2 = Point(5,6);

    cout << "The distance between the two points is ";
    cout << (p1 - p2) << endl << endl;

    cout << "If the two points are the same, the output will be 1. 0 implies they are different." << endl;
    cout << (p1 == p2) << endl << endl;

    cout << "If the two points are different, the output will be 1. 0 implies they are the same." << endl;
    cout << (p1 != p2) << endl << endl;

    cout << "The midpoint between the two points is ";
    (p1 / p2).pretty_print();
    cout << endl;

    cout << "Multiplying the point by a constant yields ";
    (p1 * 3).pretty_print();
    cout << endl;

    cout << "The coordinate you asked to retrieve for this point is ";
    cout << p2['y'] << endl;

}