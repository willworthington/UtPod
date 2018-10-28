//
// Created by willworthington on 10/23/2018.
//
#include <cstdlib>
#include <iostream>

#ifndef UTPOD_SONG_H
#define UTPOD_SONG_H
using namespace std;

class Song {

private:
    string title;
    string artist;
    int size;

public:
    Song();
    Song(string title);
    Song(string title, string artist, int size);

    string getTitle() const;
    void setTitle(string t);
    string getArtist() const;
    void setArtist(string a);
    int getSize() const;
    void setSize(int s);

};


#endif //UTPOD_SONG_H
