#include <iostream>
#include <vector> // Include the vector header
using namespace std;

void printvac(const vector<int>& v) { // Pass by reference to avoid copying
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl; // Add a newline for better output formatting
}

int main() {
	
    vector<int> v(10);
  
    // int n;
    // cin >> n;
    
    // for (int i = 0; i < n; ++i) { // Declare 'i' as an integer
    //     int x;
    //     cin >> x;

    //     // Add x value to the vector
    //     v.push_back(x);
    // }
    
    // printvac(v);

    return 0;
}