//
// Created by willworthington on 10/28/2018.
//
#include <iostream>
#include <string>
#include <time.h>
#include "UtPod.h"
#include "Song.h"

using namespace std;

    UtPod::UtPod() {
        songs = nullptr;
        memSize = MAX_MEMORY;
    }

    UtPod::UtPod(int size) {
        songs = nullptr;
        if ((size<=0)||(size>512)){
            memSize = MAX_MEMORY;
        }
        else{
            memSize = size;
        }
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
            if (songs->next==NULL){
                songs = NULL;
            }
            else{
                SongNode *found = songs;
                songs=songs->next;
                delete found;
            }
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
        int length = getNumSongs();
        if (length < 2){
            //Don't do shit :)
        }
        else {
            srand(time(NULL));
            int s1, s2;
            SongNode *tmp1, *tmp2;
            //int s2;
            //SongNode *tmp2;
            for (int iter=0; iter<2*length; iter++){
                tmp1 = songs;
                tmp2 = songs;
                s1 = rand() % length;
                s2 = rand() % length;
                for (int i=0; i<s1; i++){
                    tmp1=tmp1->next;
                }
                for (int i=0; i<s2; i++){
                    tmp2=tmp2->next;
                }
                tmp1->s.swap(tmp2->s);
            }

            //cout << "Index1: " << s1 << ", Song1: " << tmp1->s.getTitle() << endl;
            //cout << "Index2: " << s2 << ", Song2: " << tmp2->s.getTitle() << endl;



        }

    }



    void UtPod::showSongList(){
        SongNode *tmp = songs;
        while (tmp != nullptr){
            cout << tmp->s.getTitle() << ", "
            << tmp->s.getArtist() << ", "
            << tmp->s.getSize() << " MB" << endl;
            tmp=tmp->next;
        }
    }

    void UtPod::sortSongList(){
        if (getNumSongs()<2){
            //Does not need to be sorted
            //Don't need to do anything :)
        }
        else{
            while (bubbleSort());
        }
        //songs->s.swap(songs->next->s);
    }

    bool UtPod::bubbleSort(){
        bool swapped = false;

        SongNode *tmp = songs;
        while (tmp->next != NULL){
            if (tmp->s>tmp->next->s){
                tmp->s.swap(tmp->next->s);
                swapped = true;
                tmp=tmp->next;
            }
            else {
                tmp=tmp->next;
            }
        }

        return swapped;
        //return false;
    }

    void UtPod::clearMemory(){
        if (songs==NULL){
            //UtPod is already empty
            //Don't need to do anything :)
        }
        else{
            while (songs->next != NULL){
                removeSong(songs->next->s);
            }
            removeSong(songs->s);
        }
    }

    int UtPod::getNumSongs(){
        int length = 0;
        if (songs==NULL){
            return 0;
        }
        else {
            SongNode *tmp = songs;
            while (tmp!=NULL){
                length++;
                tmp = tmp->next;
            }
            return length;
        }
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
        clearMemory();
    }
