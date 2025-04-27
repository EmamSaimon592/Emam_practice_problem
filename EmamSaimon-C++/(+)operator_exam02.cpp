#include <iostream>
using namespace std;
class Distance{
 private:
 int feet, inches;
 public:
 	//without pera constr
 	Distance() : feet(0), inches(0.0){}
    // with pera constr 
	 Distance(int ft, float in) : feet(ft), inches(in){

	 }
   
   // set function this is==>
		void getdist(){
		cout<<"Enter Feet:";
		cin>>feet;
		cout<<"Enter inch:";
		cin>>inches;
		}

	// Get Function this is ==>	
	 void showdist(){ 
	  cout << "Feet:"<< feet << " and Inch:" << inches << endl;
	   }

  //operator overloaded
	Distance operator + (const Distance& d2){

	int f = feet + d2.feet; //add the feet
	int i = inches + d2.inches; //add the inches
	return Distance(f, i); //initialized to sum
	}

};


int main(){
Distance dist1, dist3, dist4; //define distances

dist1.getdist(); //get dist1 from user

Distance dist2(6, 7); //define, initialize dist2

dist3 = dist1 + dist2; //single ‘+’ operator

dist4 = dist1 + dist2 + dist3; //multiple ‘+’ operators

//display all lengths
cout << "dist1 = "; dist1.showdist(); cout << endl;
cout << "dist2 = "; dist2.showdist(); cout << endl;
cout << "dist3 = "; dist3.showdist(); cout << endl;
cout << "dist4 = "; dist4.showdist(); cout << endl;
return 0;
}

// Output: 
// Enter feet: 4
// Enter inches: 5
// dist1 = feet:4 and Inch:5 ← from user
// dist2 = feet:6 and Inch:7 ← initialized in program
// dist3 = feet:10 and Inch:12 ← dist1+dist2
// dist4 = feet:20 and Inch:24 ← dist1+dist2+dist3
