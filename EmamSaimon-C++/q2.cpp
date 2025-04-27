// unary operator overloading (++, --)
//pre increment(x++, y++) er kettre [ A operator++()] () argument er modde int likhte hobe na
//post increment(++x, ++y) er kettre [ A operator++(int)] () argument er modde int likhte hobe !!!

//pre incremet example
#include<iostream>
using namespace std;
class A{
 int x,y;
 public:
	 A(){
	   	x=0;
	   	y=0;
	   }
	 A(int i,int j){
	 	x=i;
	 	y=j;
	 }
 A operator++(){  // A operator--(){x--; y--;}
	 x++;
	 y++;
 }

 void show(){
   cout<<x<<" "<<y<<endl;
 }
};
int main(){
 A obj1(10,20);
 ++obj1; // --obj1 
 obj1.show();
 return 0;
}



// example 02 post increment
#include<iostream>
using namespace std;
class A{
 int x,y;
 public:
	 A(){
	   	x=0;
	   	y=0;
	   }
	 A(int i,int j){
	 	x=i;
	 	y=j;
	 }
 A operator++(int){  // A operator--(int){x--; y--;}
	 x++;
	 y++;
 }

 void show(){
   cout<<x<<" "<<y<<endl;
 }
};
int main(){
 A obj1(10,20);
 obj1++; //obj1--
 obj1.show();
 return 0;
}