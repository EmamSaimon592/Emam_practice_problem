#include<iostream>
using namespace std;

//way 1
template<typename T> T Add(T a, T b){
    return a + b;
}

//way 2
// template<typename T>
// T Add(T a, T b){
//    T result;
//    result = a + b;
//     return result;
// }

int main(){
 int a = 21, b = 20;
 double c = 2.5, d = 5.7;

 cout<<Add(a, b)<<endl;
 cout<<Add(c, d)<<endl;

    return 0;
}