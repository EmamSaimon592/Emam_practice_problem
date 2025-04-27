#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {

    }

    // Friend function to overload the + operator
    friend Complex operator+(const Complex& c1, const Complex& c2);

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Define the friend function outside the class
Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);

    Complex c3 = c1 + c2;  // Uses the overloaded + operator
    c3.display();  // Output: 4.5 + 6.5i

    return 0;
}
//4.5 + 6.5i
