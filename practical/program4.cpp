#include <iostream>
using namespace std;

class Shape {
private:
    double radius;
    double length;
    double width;

public:
    // Constructor for rectangle (initializing length and width)
    Shape(double l, double w) : length(l), width(w), radius(0) {
        cout << "Rectangle created with length: " << length << " and width: " << width << endl;
    }

    // Constructor for circle (initializing radius only)
    Shape(double r) : radius(r), length(0), width(0) {
        cout << "Circle created with radius: " << radius << endl;
    }

    // Destructor
    ~Shape() {
        cout << "Shape object is destroyed." << endl;
    }

    // Function to calculate the perimeter of the rectangle
    double rectanglePerimeter() const {
        if (length > 0 && width > 0) {
            return 2 * (length + width);
        } else {
            return 0; // Not a valid rectangle if length or width is 0
        }
    }

    // Function to calculate the perimeter of the circle
    double circlePerimeter() const {
        if (radius > 0) {
            return 2 * 3.14159 * radius;  // Using π = 3.14159
        } else {
            return 0; // Not a valid circle if radius is 0
        }
    }
};

int main() {
    // Create a rectangle object
    Shape rectangle(10, 5);
    cout << "Rectangle perimeter: " << rectangle.rectanglePerimeter() << endl;

    // Create a circle object
    Shape circle(7);
    cout << "Circle perimeter: " << circle.circlePerimeter() << endl;
    
  // Displaying additional information
    cout << "Name - Riya Sinha" << endl;
    cout << "Roll - A45304823045" << endl;
    cout << "Class - BCA 3 A" << endl;

    return 0;
}