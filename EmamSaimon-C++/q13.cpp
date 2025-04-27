#include <iostream>
#include <string>
using namespace std;

// Base class
class Item {
protected:
    string title;
    double price;

public:
    Item(string t, double p) : title(t), price(p) {}
    virtual void display() {
        cout << "Title: " << title << ", Price: $" << price << endl;
    }
};

// Book subclass
class Book : public Item {
protected:
    string author, genre, isbn;

public:
    Book(string t, double p, string a, string g, string i) 
        : Item(t, p), author(a), genre(g), isbn(i) {}

    void display() override {
        Item::display();
        cout << "Author: " << author << ", Genre: " << genre << ", ISBN: " << isbn << endl;
    }
};

// Fiction subclass
class Fiction : public Book {
    string theme;

public:
    Fiction(string t, double p, string a, string g, string i, string th) 
        : Book(t, p, a, g, i), theme(th) {}

    void display() override {
        Book::display();
        cout << "Theme: " << theme << endl;
    }
};

// Non-Fiction subclass
class NonFiction : public Book {
    string subject;

public:
    NonFiction(string t, double p, string a, string g, string i, string sub) 
        : Book(t, p, a, g, i), subject(sub) {}

    void display() override {
        Book::display();
        cout << "Subject: " << subject << endl;
    }
};

// CD subclass
class CD : public Item {
protected:
    string artist, genre;
    double duration;

public:
    CD(string t, double p, string a, string g, double d) 
        : Item(t, p), artist(a), genre(g), duration(d) {}

    void display() override {
        Item::display();
        cout << "Artist: " << artist << ", Genre: " << genre << ", Duration: " << duration << " mins" << endl;
    }
};

// Rock subclass
class Rock : public CD {
    string era;

public:
    Rock(string t, double p, string a, string g, double d, string e) 
        : CD(t, p, a, g, d), era(e) {}

    void display() override {
        CD::display();
        cout << "Era: " << era << endl;
    }
};

// Pop subclass
class Pop : public CD {
    string hitSong;

public:
    Pop(string t, double p, string a, string g, double d, string hs) 
        : CD(t, p, a, g, d), hitSong(hs) {}

    void display() override {
        CD::display();
        cout << "Hit Song: " << hitSong << endl;
    }
};

int main() {
    // Create sample instances
    Fiction fictionBook("The Great Adventure", 19.99, "John Doe", "Adventure", "123456789", "Courage");
    NonFiction nonFictionBook("Science Explained", 29.99, "Jane Smith", "Science", "987654321", "Physics");

    Rock rockCD("Rock Legends", 14.99, "The Rockers", "Rock", 45, "80s");
    Pop popCD("Pop Hits", 12.99, "Pop Star", "Pop", 40, "Best Song Ever");

    // Display details
    fictionBook.display();
    cout << endl;
    nonFictionBook.display();
    cout << endl;
    rockCD.display();
    cout << endl;
    popCD.display();

    return 0;
}



