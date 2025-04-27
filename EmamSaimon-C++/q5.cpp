//Assignment Operator by using friend function [except one , and this is " = " , baki shob gula dia kora jabe]

//Assignment Operator [ =, +=, *=, /=, -=, %=]
#include <iostream>
using namespace std;
class complex{
 private:
 	int real, imag;
 public:
 	complex(int real =0 , int imag =0){
 		this->real = real;
 		this->imag = imag;
 	}
 		
 friend complex operator +(complex a, complex b);
  void operator =(complex const &obj){ //[ change sign is here]
	
	real = obj.real; //[ change sign is here]
    imag = obj.imag; //[ change sign is here]
	
}

 	
 	void print(){
 		cout<<real<<"+"<<imag<<"i"<<endl; //[ change sign is here]
 	}
};

complex operator +(complex a, complex b){ //[ change sign is here]
	complex temp;
	temp.real = a.real + b.real; //[ change sign is here]
	temp.imag = a.imag + b.imag; //[ change sign is here]
	return temp;
}


int main(){
  complex a(3, 2), b(2, 3), c;

  // in C =>>>>
  //complex operator +(complex a, complex b)
  // b holo  operator er argument er [complex b]
  // a holo  operator er argument er [complex a]

  c = a + b; // [ change sign is here]
  c.print();

	return 0;
}

