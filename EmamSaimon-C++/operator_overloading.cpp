#include <iostream>
using namespace std;
class Distance{
private:
    int feet;
    int inches;
public:
    //constructor without perameter
 Distance(){
     feet = 0;
     inches = 0;
 }
 // with pera
 Distance(int f, int i){
     feet = f;
     inches = i;
 }
// funtion
void display(){
  cout<< "F:" << feet <<endl << "I:" <<inches<<endl;
}

Distance operator-(){
feet = -feet;
inches = -inches;
return Distance(feet, inches);
}

};


int main()
{
    Distance D1(11,10), D2(-5,11);
    D1.display();

    ///Negate D1 and store the result
    -D1;
    ///Display negated D1
    D1.display();
    ///Negate D2 and store the result
    -D2;

    ///Display negated D2
    D2.display();
    return 0;
}