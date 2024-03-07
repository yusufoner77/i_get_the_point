#include <iostream>
#include "Point.hpp"

using namespace std;

int main() {

    Point p1 = Point(1,1);
    Point p2 = Point(1,5);

    cout << (p1 - p2) << endl;

    cout << (p1 == p2) << endl;

    cout << (p1 != p2) << endl;

    (p1 / p2).pretty_print();

    (p1 * 3).pretty_print();

}