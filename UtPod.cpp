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
        //songs->next= NULL;
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
            SongNode *temp = new SongNode;
            temp->next=songs;
            temp->s = s;
            songs=temp;
            return SUCCESS;
        }

    }

    //probably will need to use delete function to free the memory
    int UtPod::removeSong(Song const &s){
        return 0;
    }

    void UtPod::shuffle(){

    }

    void UtPod::showSongList(){
        SongNode *tmp = songs;
        while (tmp != nullptr){
            string tmpTitle = tmp->s.getTitle();
            string tmpArtist = tmp->s.getArtist();
            cout << tmpTitle << " " << tmpArtist << endl;
            tmp=tmp->next;
        }
    }

    void UtPod::sortSongList(){

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
