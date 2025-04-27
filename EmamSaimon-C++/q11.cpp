// Write a C++ program using function templates to add two numbers of int 
// and float data types?
#include <iostream>
using namespace std;

// Function template for addition
template <typename T> T add(T num1, T num2) {
    return num1 + num2;
}

int main() {
    // Adding two integers
    int a = 10, b = 20;
    cout << add(a, b) << endl;

    // Adding two floats
    float c = 5.5, d = 2.3;
    cout << add(c, d) << endl;

    return 0;
}