#include <iostream>
using namespace std;
class A{
 public:
 	void eat(){
 		cout<<"please Eat"<<endl;
 	}

};
class B: virtual public A{
	public:
 	void dont_eat(){
 		cout<<"please dont Eat"<<endl;
 	}
};

class C: virtual public A{
		
};

class D: virtual public B,C{
		
	};
	int main(){
		D obj;
		obj.eat();
		obj.dont_eat();	

	}