//Logical Operator [&&, || , !]
#include <iostream>
using namespace std;
class A {
private:
    int x, y; // Private member variables

public:
    // Default constructor
    A() : x(0), y(0) {}

    // Parameterized constructor
    A(int i, int j) : x(i), y(j) {}

    // Overloaded && operator
    bool operator&&(const A& obj) const {
        return (x && obj.x) && (y && obj.y);
    }

    // Overloaded == operator
    bool operator==(const A& obj) const {
        return x == obj.x && y == obj.y;
    }

    // Overloaded | operator
    bool operator|(const A& obj) const {
        return (x && obj.x) || (y && obj.y);
    }
};

int main() {
    A obj1(10, 10), obj2(10, 0), obj3(5, 3), obj4(6, 2);

    // Check equality using == operator
    if (obj1 == obj2) {
        cout << "SAME" << endl;
    } else {
        cout << "Not Same" << endl;
    }

    // Check logical OR using | operator
    if (obj2 | obj3) {
        cout << "obj2 obj3 is true" << endl;
    } else {
        cout << "false" << endl;
    }

    // Check logical AND using && operator
    if (obj2 && obj3) {
        cout << "obj2 obj3 is true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}