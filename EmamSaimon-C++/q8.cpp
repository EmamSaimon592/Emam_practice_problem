//Operator Overloading in C++ Using Friend Function
#include<bits/stdc++.h>
using namespace std;
class A{
 int x,y;
 public:
 A(){x=0;y=0;}
 A(int i,int j){x=i,y=j;}
 // int operator!=(A obj1){ //relational
 // return x!=obj1.x and y!=obj1.y;
 // }
 friend int operator!=(A &obj1,A &obj2); //relational using friend funtion
 A operator++(int){ //unary 
 x++;
 y++;
 return *this;
 }
 
 A operator+(A obj){ //binary
 A temp;
 temp.x = x+obj.x;
 temp.y = y+obj.y;
 return temp;
 }
 friend A operator+(int i,A &obj2); //to solve int+object problem by using friend funtion
 friend A operator+=(A &obj1,A &obj2); //assighnment operator using friend function
 friend int operator&&(A &obj1,A &obj2); //logical operator using friend function
void show(){
 cout<<x<<" "<<y<<endl;
 }
};
int operator!=(A &obj1,A &obj2){
 return obj1.x!=obj2.x and obj1.y!=obj2.y;
}
A operator+=(A &obj1,A &obj2){
 obj1.x+=obj2.x;
 obj1.y+=obj2.y;
 return obj1;
}
A operator+(int i,A &obj2){
 A temp;
 temp.x = i+obj2.x;
 temp.y = i+obj2.y;
 return temp;
}
int operator&&(A &obj1,A &obj2){
 return (obj1.x && obj2.x) && (obj1.y && obj2.y);
}
int main(){
 A obj1(10,30),obj2(30,0),obj3;
 if(obj1 && obj2){
 obj3 = 20+obj2;
 obj3.show();
 }else{
 cout<<"+="<<endl;
 obj1+=obj2;
 obj1.show();
 }
}
