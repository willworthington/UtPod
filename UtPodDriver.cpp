
/*#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}*/


/* utPod_driver.cpp
Demo Driver for the UtPod.

Roger Priebe
EE 312 10/16/18

This is a basic driver for the UtPod.

You will want to do more complete testing.

*/
#include <cstdlib>
#include <iostream>
#include <string>
#include "Song.h"
#include "UtPod.h"

using namespace std;

void testGetTotalMemory();
void testGetRemainingMemory();
void testSwap();
void testSongBoolOps();
void testGetNumSongs();
void testClearMemory();
void testSortSongList();
void testShuffle();
void recommendedTestDriver();

int main(int argc, char *argv[])
{

    testGetTotalMemory();
    testGetRemainingMemory();
    testSwap();
    testSongBoolOps();
    testGetNumSongs();
    testClearMemory();
    testSortSongList();
    testShuffle();
    recommendedTestDriver();

    /*

    */


}

void testGetTotalMemory(){
    cout << "**Testing getTotalMemory() function**" << endl;

    UtPod t1;
    cout << "UtPod t1 total memory = " << t1.getTotalMemory() << endl;

    UtPod t2(5);
    cout << "UtPod t2 total memory = " << t2.getTotalMemory() << endl;

    UtPod t3(0);
    cout << "UtPod t3 total memory = " << t3.getTotalMemory() << endl;

    UtPod t4(-10);
    cout << "UtPod t4 total memory = " << t4.getTotalMemory() << endl;

    UtPod t5(600);
    cout << "UtPod t5 total memory = " << t5.getTotalMemory() << endl;


    cout << endl << endl;
}

void testGetRemainingMemory(){
    cout << "**Testing getRemainingMemory() function**" << endl;
    UtPod t;

    Song s1("Abcd", "John", 6);
    t.addSong(s1);
    cout << "Result 1 = " << t.getRemainingMemory() << endl;
    Song s2("qwerty", "Ben", 200);
    t.addSong(s2);
    cout << "Result 2 = " << t.getRemainingMemory() << endl;
    Song s3("Too big", "Jerk", 307);
    cout << "Should return NO_MEMORY (-1): " << t.addSong(s3) << endl;
    cout << "Result 3 = " << t.getRemainingMemory() << " (should be same as Result 2)" << endl;

    cout << endl << endl;}

void testSwap(){
    cout << "**Testing swap() function**" << endl;

    Song s1("Hey Jude1", "Beatles", 4);
    Song s2("Hey Jude2", "Beatles", 5);

    cout << "Before swap:" << endl << "s1 = " << s1.getTitle()
    << ", s2 = " << s2.getTitle() << endl;
    s1.swap(s2);
    cout << "After swap:" << endl << "s1 = " << s1.getTitle()
         << ", s2 = " << s2.getTitle() << endl;
    cout << endl << endl;
}

void testGetNumSongs(){
    cout << "**Testing getNumSongs() function**" << endl;

    UtPod t;

    cout << "Number of songs before adding any: " << t.getNumSongs() << endl;

    Song s1("Hey Jude1", "Beatles", 4);
    t.addSong(s1);
    Song s2("Hey Jude2", "Beatles", 5);
    t.addSong(s2);
    cout << "Number of songs after adding 2: " << t.getNumSongs() << endl;
    t.removeSong(s1);
    t.removeSong(s2);
    cout << "Number of songs after removing those 2: " <<t.getNumSongs() << endl;

    cout << endl << endl;

}

void testSongBoolOps(){
    cout << "**Testing overridden boolean operations for Song class**" << endl;

    //Test by varying the titles, artists, and sizes
    //Make sure s1 is greater than s2 in any of your test cases
    Song s1("abcd", "Beatles", 4);
    Song s2("abcd", "Beatles", 5);

    cout << "Testing '<':" << endl
    << "Should return true: " << (s1<s2) << endl << endl;


    cout << "Testing '>':" << endl
    << "Should return false (testing '>'): " << (s1>s2) << endl << endl;

    cout << "Testing '==':" << endl
    << "Should return false (testing '=='): " << (s1==s2) << endl << endl;

    cout << endl << endl;

}

void testClearMemory(){
    cout << "**Testing clearMemory() function**" << endl;

    UtPod t;
    t.clearMemory();

    cout << "Number of songs after clearing memory of already empty UtPod: " << t.getNumSongs() << endl;

    Song s1("Hey Jude1", "Beatles", 4);
    t.addSong(s1);
    Song s2("Hey Jude2", "Beatles", 5);
    t.addSong(s2);
    cout << "Just added 2 songs to UtPod: " << t.getNumSongs() << endl;
    t.clearMemory();
    cout << "Number of songs after calling clearMemory(): " << t.getNumSongs() << endl;

    cout << endl << endl;

}

void testSortSongList(){
    cout << "**Testing sortSongList() function**" << endl;

    UtPod t;

    t.sortSongList();
    cout << endl << "Result of sorting empty list: " << endl;
    t.showSongList();

    Song s1("Hey Jude1", "Beatles", 4);
    t.addSong(s1);
    cout << endl << "List of length 1 song: " << endl;
    cout << "---Before sort: " << endl;
    t.showSongList();
    cout << "--After sort: " << endl;
    t.sortSongList();
    t.showSongList();


    Song s2("Hey Jude2", "Beatles", 5);
    t.addSong(s2);
    cout << endl << "List of length 2 songs: " << endl;
    cout << "---Before sort:" << endl;
    t.showSongList();
    cout << "---After sort:" << endl;
    t.sortSongList();
    t.showSongList();

    Song s3("Hey John", "Beatles", 5);
    t.addSong(s3);
    Song s4("Hey John", "Beatles", 2);
    t.addSong(s4);
    Song s5("Hey John", "Apple", 5);
    t.addSong(s5);
    Song s6("abcd", "Alpha", 3);
    t.addSong(s6);
    Song s7("aBcd", "Alpha", 5);
    t.addSong(s7);
    Song s8("Hey Jude3", "Beatles", 5);
    t.addSong(s8);
    cout << endl << "List of length " << t.getNumSongs() << " songs: " << endl;
    cout << "---Before sort:" << endl;
    t.showSongList();
    cout << "---After sort:" << endl;
    t.sortSongList();
    t.showSongList();

    cout << endl << endl;

}

void testShuffle(){
    cout << "**Testing shuffle() function**" << endl;

    UtPod t;

    cout << "***********************" << endl << "Empty list:" << endl;
    t.showSongList();
    cout << "Shuffling empty list:" << endl;
    t.shuffle();
    t.showSongList();

    cout << endl << "***********************" << endl << "List of one:" << endl;
    Song s3("a", "albert", 5);
    t.addSong(s3);
    t.showSongList();
    cout << "After shuffle:" << endl;
    t.shuffle();
    t.showSongList();


    Song s4("b", "bob", 2);
    t.addSong(s4);
    Song s5("c", "carl", 5);
    t.addSong(s5);
    Song s6("d", "daniel", 3);
    t.addSong(s6);
    Song s7("e", "evan", 5);
    t.addSong(s7);
    Song s8("f", "frank", 5);
    t.addSong(s8);

    cout << endl << "***********************" << endl << "Long List:" << endl;
    t.showSongList();
    t.shuffle();
    cout << endl << "After Shuffle:" << endl;
    t.showSongList();
    t.shuffle();
    cout << endl << "Shuffled Again:" << endl;
    t.showSongList();

    cout << endl << endl;

}

void recommendedTestDriver(){
    cout << "**This is the general driver created to help us get started with the code**" << endl;


    UtPod t;

    Song s1("Beatles", "Hey Jude1", 4);
    int result = t.addSong(s1);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s2("Beatles", "Hey Jude2", 5);
    result = t.addSong(s2);
    cout << "result = " << result << endl;

    t.showSongList();

    Song s3("Beatles", "Hey Jude3", 6);
    result = t.addSong(s3);
    cout << "result = " << result << endl;

    Song s4("Beatles", "Hey Jude4", 7);
    result = t.addSong(s4);
    cout << "result = " << result << endl;

    Song s5("Beatles", "Hey Jude5", 241);
    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s2);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s3);
    cout << "delete result = " << result << endl;

    t.showSongList();

    result = t.removeSong(s1);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s5);
    cout << "delete result = " << result << endl;

    result = t.removeSong(s4);
    cout << "delete result = " << result << endl;


    t.showSongList();

    result = t.addSong(s5);
    cout << "add result = " << result << endl;

    t.showSongList();
    cout << "memory = " << t.getRemainingMemory() << endl;


}