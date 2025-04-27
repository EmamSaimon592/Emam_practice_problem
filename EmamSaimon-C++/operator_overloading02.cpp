#include <iostream>
using namespace std;
class test{

private:
	int count;
public:
 test():count(7){}

 void operator++(){
 	count += 1;

 }
 void display(){
 	cout<<"count is:"<<count<<endl;
 }

};
int main(){

	test t;
	// this calls "function void operator ++()" function
	++t;
	t.display();
	return 0;

}