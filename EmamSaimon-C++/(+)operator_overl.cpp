#include <iostream>
using namespace std;
class Weight {
private:
    int kilo;
public:
 Weight(){
 	kilo = 5;

 }
 Weight(int k){
 	kilo = k;

 }
 Weight operator +(const Weight& obj){
 	int total;
 	total = kilo + obj.kilo;
 	cout<<"total:"<<total<<endl;
 }
 	

 
};


int main()
{
 Weight w1,w2(20);
 Weight w3;
 w3 = w1+w2;
    return 0;
}

