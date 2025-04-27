#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Method to calculate the area
    double area() const {
        return length * width;
    }

    // Overload the '==' operator to compare areas of two rectangles
    bool operator==(const Rectangle& other) const {
        return this->area() == other.area();
    }

    // Overload the '>' operator to compare areas of two rectangles
    bool operator>(const Rectangle& other) const {
        return this->area() > other.area();
    }
};

int main() {
    Rectangle rect1(4.0, 5.0);  // Area = 20.0
    Rectangle rect2(3.0, 7.0);  // Area = 21.0

    // Compare rectangles
    if (rect1 == rect2) {
        cout << "Both rectangles have the same area." << endl;
    } else if (rect1 > rect2) {
        cout << "Rectangle 1 is larger than Rectangle 2." << endl;
    } else {
        cout << "Rectangle 2 is larger than Rectangle 1." << endl;
    }

    return 0;
}
