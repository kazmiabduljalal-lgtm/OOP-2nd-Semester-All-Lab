#include <iostream>
using namespace std;
// creating shape class
class Shape {
public:
    virtual double area() {
        return 0;
    }
};
// creating Rectangle class
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() override {
        return length * width;
    }
};
// creating circle class
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape* S1;
    Shape* S2;
    
    Rectangle R(11.0, 3.0);
    Circle C(13.0);
    
    S1 = &R;
    S2 = &C;
    
    cout << "Rectangle Area: " << S1->area() << endl;
    cout << "Circle Area: " << S2->area() << endl;
    
    return 0;
}
