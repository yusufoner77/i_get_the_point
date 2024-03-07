
class Point {

private:
    float x;
    float y;

public:
    Point(float x_coordinate, float y_coordinate);
    double operator-(Point p1);
    bool operator==(Point p1);
    bool operator!=(Point p1);
    Point operator/(Point p1);
    Point operator*(double c);
    void pretty_print();

};