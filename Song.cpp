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

    void Song::swap(Song &s) {
        Song temp = s;
        s = *this;
        *this = temp;

    }


    bool Song::operator < (Song const &rhs){
        if (title<rhs.getTitle()) return true;
        else if (title>rhs.getTitle()) return false;
        else{
            if (artist<rhs.getArtist()) return true;
            else if (artist>rhs.getArtist()) return false;
            else {
                if (size<rhs.getSize()) return true;
                else return false;
            }
        }

    }

    bool Song::operator > (Song const &rhs){
        if (title>rhs.getTitle()) return true;
        else if (title<rhs.getTitle()) return false;
        else {
            if (artist > rhs.getArtist()) return true;
            else if (artist < rhs.getArtist()) return false;
            else {
                if (size > rhs.getSize()) return true;
                else return false;
            }
        }
    }

    bool Song::operator ==(Song const &rhs){
        return (title==rhs.getTitle() &&
                artist==rhs.getArtist() &&
                size==rhs.getSize());
    }


    //Song::~Song(){
    //
    //}