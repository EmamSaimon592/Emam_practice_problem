// In C++, a static function is a member function of a class 
// that can be called without creating an instance (object) of the class.
// Here are the reasons for using a static function
//  in the context of the Average class:
// 1. No Need for Object Instantiation

#include <iostream>
using namespace std;

class Average {
public:
    // Static function to calculate and print the average
    static void calculateAverage() {
        double num1, num2, num3;
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;

        double average = (num1 + num2 + num3) / 3.0;
        cout << "The average is: " << average << endl;
    }
};

int main() {
    // Call the static function without creating an object
    Average::calculateAverage();
    return 0;
}