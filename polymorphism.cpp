#include <iostream>
using namespace std;

class Shape {
public:
    virtual void calculateArea() {
        cout << "Calculating area of a shape." << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void calculateArea() override {
        cout << "Area of Circle: "
             << 3.142 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void calculateArea() override {
        cout << "Area of Rectangle: "
             << length * width << endl;
    }
};

int main() {
    Circle circle(7);
    Rectangle rectangle(5, 4);

    Shape* shape;

    shape = &circle;
    shape->calculateArea();

    shape = &rectangle;
    shape->calculateArea();

    return 0;
}