// relational operator => o=reterns true? false
//Relational Operator [ >, < , = =, <=, >= ]


// example 01
#include <iostream>
using namespace std;

class Distance {
private:
    int feet, inches;

public:
    // Constructor with default arguments
    Distance(int feet = 0, int inches = 0) {
        this->feet = feet;
        this->inches = inches;
    }

    // Overloading the > operator
    bool operator>(const Distance& obj)  {
        if (feet > obj.feet) return true;
        if (feet == obj.feet && inches > obj.inches) return true;
        return false;
    }

    // Function to print the distance
    void print()  { 
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance a(5, 10), b(5, 11); // Create two Distance objects

    // Compare the distances using the overloaded > operator
    if (a > b) {
        cout << "a is larger" << endl;
    } else {
        cout << "b is larger" << endl;
    }

    return 0;
}


//example 2
#include<iostream>
using namespace std;
class A{
     int x;
public:
    A(){
        x=0;
    }
    A(int i){
        x=i;
    }
bool operator>(A const &obj){
     return x>obj.x;
}
void show(){
     cout<<x<<endl;
  }
};
int main(){
   A obj1(10),obj2(20);
         if(obj1>obj2){
            cout<<"Obj1 is Greater";
          }
         else{
            cout<<"Obj2  is Greter";
      }
 return 0;
}