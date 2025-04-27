#include <iostream>
#include <string>
using namespace std;

// Base class
class Media {
protected:
    string title;
    double duration;

public:
    Media(string t, double d) {
        title = t;
        duration = d;
    }

    virtual void display() {
        cout << "Title: " << title << ", Duration: " << duration << " mins" << endl;
    }
};

// Subclass for Song
class Song : public Media {
protected:
    string artist, genre;

public:
    Song(string t, double d, string a, string g) : Media(t, d) {
        artist = a;
        genre = g;
    }

    void display() {
        Media::display();
        cout << "Artist: " << artist << ", Genre: " << genre << endl;
    }
};

// Subclass for Podcast
class Podcast : public Media {
protected:
    string host, episodeInfo;

public:
    Podcast(string t, double d, string h, string e) : Media(t, d) {
        host = h;
        episodeInfo = e;
    }

    void display()  {
        Media::display();
        cout << "Host: " << host << ", Episode: " << episodeInfo << endl;
    }
};

// Further subclass for MusicTrack
class MusicTrack : public Song {
    string album;

public:
    MusicTrack(string t, double d, string a, string g, string alb) : Song(t, d, a, g) {
        album = alb;
    }

    void display() {
        Song::display();
        cout << "Album: " << album << endl;
    }
};

// Further subclass for AudioBook
class AudioBook : public Podcast {
    string narrator;

public:
    AudioBook(string t, double d, string h, string e, string n) : Podcast(t, d, h, e) {
        narrator = n;
    }

    void display() override {
        Podcast::display();
        cout << "Narrator: " << narrator << endl;
    }
};

int main() {
    // Create sample instances
    MusicTrack track("Shape of You", 4.5, "Ed Sheeran", "Pop", "Divide");
    AudioBook book("Learning C++", 120, "Tech Talks", "Episode 1", "John Doe");

    // Display details
    track.display();
    cout << endl;
    book.display();

    return 0;
}
