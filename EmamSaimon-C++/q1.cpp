// // binary operator overloadingr (+, -, *, /, %)
// //NB: to another operator just change the sign 
// #include<iostream>
// using namespace std;
// class complex{
//  private:
//  	int real, imag;
//  public:
//  	complex(int real =0 , int imag =0){
//  		this->real = real;
//  		this->imag = imag;
//  	}
//  	// const ta complex er age ba pore o likhte parbe	
// complex operator +(complex const &obj){ //[ change sign is here]
// 	complex temp;
// 	temp.real = real + obj.real; //[ change sign is here]
// 	temp.imag = imag + obj.imag; //[ change sign is here]
// 	return temp;
// }

//  	void print(){
//  		cout<<real<<"+"<<imag<<"i"<<endl; //[ change sign is here]
//  	}
// };
// int main(){
//   complex a(3, 2), b(2, 3), c;
//   c = a + b; // b holo  operator er argument ta. [ change sign is here]
//   c.print();

// 	return 0;
// }

//example 02
#include<iostream>
using namespace std;
class A{
 int x,y;
 public:
 A(){x=0;y=0;}
 A(int i,int j){x=i;y=j;}
 A operator+(A obj){
 A temp;
 temp.x=x+obj.x;
 temp.y=y+obj.y;
 return temp;
 }
 void show(){
 cout<<x<<" "<<y<<endl;
 }
};
int main(){
 A obj1(10,20),obj2(30,40),obj3;
 obj3 = obj1+obj2;
 obj3.show();
}