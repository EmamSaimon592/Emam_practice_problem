#include <iostream>
using namespace std;
class Base{
public:
	int x;
	
	void set(){
		cin>>x;
	}
	void  get(){
		cout<<x<<endl;
	}

};
class Derived: public Base{

};
int main(){
	Base *ptr;
	Derived obj;
	//pointer ptr diye ami base er shob kichu excess korte parbo
	ptr = &obj; //ptr er derived er location/reff/memory ta rekhe dichi
	ptr->set();  //  [ -> ] = dereference signh
	ptr->get();

	return 0;
}

	