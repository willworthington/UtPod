//
// Created by willworthington on 10/28/2018.
//
#include <iostream>
#include <string>
#include "UtPod.h"
#include "Song.h"

using namespace std;

    UtPod::UtPod() {
        songs = nullptr;
        memSize = 512;
    }

    UtPod::UtPod(int size) {
        songs = nullptr;
        memSize = size;
    }

    int UtPod::addSong(Song const &s){
        if ((getRemainingMemory()-s.getSize())<=0){
            return NO_MEMORY;
        }
        else {
            SongNode *tmp = new SongNode;
            tmp->next=songs;
            tmp->s = s;
            songs=tmp;
            return SUCCESS;
        }

    }

    int UtPod::removeSong(Song const &s){
        SongNode *tmp = songs;
        //if the first node holds the song we're looking for
        if (songs->s==s){
            songs = NULL;
            return SUCCESS;
        }
        //if any node after the first holds the song we're looking for
        else {
            while (tmp->next != nullptr){
                if (tmp->next->s==s){
                    SongNode *found = tmp->next;
                    tmp->next=tmp->next->next;
                    delete found;
                    return SUCCESS;
                }
                else{
                    tmp = tmp->next;
                }
            }
        }
        //if the song is never found in UtPod
        return NOT_FOUND;
    }

    void UtPod::shuffle(){

    }

    void UtPod::showSongList(){
        SongNode *tmp = songs;
        while (tmp != nullptr){
            //string tmpTitle = tmp->s.getTitle();
            string tmpArtist = tmp->s.getArtist();
            cout << tmp->s.getTitle() << ", "
            << tmp->s.getArtist() << ", "
            << tmp->s.getSize() << " MB" << endl;
            tmp=tmp->next;
        }
    }

    void UtPod::sortSongList(){

    }

    void UtPod::clearMemory(){

    }

    //return memSize minus sum of size of all songs in memory
    int UtPod::getRemainingMemory(){
        int remaining = memSize;
        SongNode *tmp = songs;
        while (tmp != nullptr){
            remaining-=tmp->s.getSize();
            tmp = tmp->next;
        }
        return remaining;
    }

    UtPod::~UtPod(){

    }
