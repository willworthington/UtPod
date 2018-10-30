//
// Created by willworthington on 10/28/2018.
//

#include <iostream>
#include "Song.h"

using namespace std;

    Song::Song() {
        title = "";
        artist = "";
        size = 0;
    }

    Song::Song(string title) {
        this->title = title;
        artist = "";
        size = 0;
    }

    Song::Song(string title, string artist, int size) {
        this->title = title;
        this->artist = artist;
        this->size = size;
    }

    string Song::getTitle() const{
        return title;
    }
    void Song::setTitle(string t){
        title = t;
    }
    string Song::getArtist() const{
        return artist;
    }
    void Song::setArtist(string a){
        artist = a;
    }
    int Song::getSize() const{
        return size;
    }
    void Song::setSize(int s){
        size = s;
    }

    Song::~Song(){

    }