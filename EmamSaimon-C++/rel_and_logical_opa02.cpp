#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    // Constructor
    Book(string t, string a, double p) : title(t), author(a), price(p) {}

    // Overload the '==' operator to compare prices of two books
    bool operator==(const Book& other) const {
        return this->price == other.price;
    }

    // Overload the '!=' operator
    bool operator!=(const Book& other) const {
        return this->price != other.price;
    }

    // Overload the '>' operator
    bool operator>(const Book& other) const {
        return this->price > other.price;
    }

    // Overload the '<' operator
    bool operator<(const Book& other) const {
        return this->price < other.price;
    }

    // Overload the '>=' operator
    bool operator>=(const Book& other) const {
        return this->price >= other.price;
    }

    // Overload the '<=' operator
    bool operator<=(const Book& other) const {
        return this->price <= other.price;
    }
};

int main() {
    Book book1("C++ Programming", "Author A", 29.99);
    Book book2("Java Programming", "Author B", 39.99);

    // Comparing books using relational operators
    if (book1 == book2) {
        cout << "Both books have the same price." << endl;
    } else if (book1 > book2) {
        cout << "Book 1 is more expensive than Book 2." << endl;
    } else {
        cout << "Book 2 is more expensive than Book 1." << endl;
    }

    return 0;
}
