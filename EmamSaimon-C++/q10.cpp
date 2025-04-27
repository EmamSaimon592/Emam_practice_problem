// #include<iostream>
// using namespace std;
// template<typename T> T Add(T a, T b){
//     return a + b;
// }

// int main(){
//  cout<< (int) Add('A', 'B')<<endl;
//     return 0;
// }



// Write a generic function that swaps values in two variables. Your function 
// should have two parameters of the same type. Test the function with int, 
// double and string values.
#include <iostream>
#include <string>
using namespace std;

// Generic function to swap values in two variables
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}
int main() {
    // Test with int
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    // Test with double
    double a = 1.5, b = 2.5;
    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    // Test with string
   string str1 = "Hello", str2 = "World";
   cout << "\nBefore swapping: str1 = " << str1 << ", str2 = " << str2 << endl;
    swapValues(str1, str2);
   cout << "After swapping: str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}

// Before swapping: x = 10, y = 20
// After swapping: x = 20, y = 10

// Before swapping: a = 1.5, b = 2.5
// After swapping: a = 2.5, b = 1.5

// Before swapping: str1 = Hello, str2 = World
// After swapping: str1 = World, str2 = Hello
