#include<iostream>
using namespace std;
class Shape{
public:
  virtual void draw() = 0; // pure virtual function
};

class Circle:public Shape{
 public:
 	void draw(){
 		cout<<"Draw a Circle"<<endl;
 	}
};
class Rectangle:public Shape{
 public:
 	void draw(){
 		cout<<"Draw a Rectangle"<<endl;
 	}
};
int main(){
   Circle C;
   Rectangle R;
   Shape  *ptr;

   ptr = &C;
   ptr->draw();

   ptr = &R;
   ptr->draw();


	return 0;

}