//Assignment Operator [ =, +=, *=, /=, -=, %=]
#include <iostream>
using namespace std;

class A {
private:
    int x; // Private member to store the value

public:
    // Default constructor
    A(){
    	x =0;
    }

    // Parameterized constructor
    A(int value){
    	x = value;
    }

    // Overloaded += operator
    A operator+=( A const  &obj) {
        x += obj.x; // Add the x value of the passed object to the current object
        return *this; // Return the current object
    }
    
    // Member function to display the value of x
    void show() const {
        cout << x << endl;
    }
};

int main() {
    A obj1(10), obj2(20); // Create objects with initial values

    obj1 += obj2; // Use the overloaded += operator

    obj1.show(); // Display the updated value of obj1

    return 0;
}
