//Assignment Operator (=) Overloading
#include<iostream>
using namespace std;
class Distance {
private:
		int feet;
		int inches;
public:
		Distance(){
			feet = 0;
			inches = 0;
		}

        Dstance(int f, int i){
        	feet = f; 
        	inches = i;
        }
Distance operator = (const Distance &D ){
    feet = D.feet;
    inches = D.inches;
}

  Distance displayDistance() {
      cout << "F: " << feet;
      cout << " I:" << inches << endl;
   }
};
int main() {
  Distance D1(11, 10), D2(509, 119);
  cout << "First Distance : ";
  D1.displayDistance();

  cout << "Second Distance :";
  D2.displayDistance(); 

  // use assignment operator
  D1 = D2;
  cout << "First Distance :";
  D1.displayDistance();
  
return 0;
}
