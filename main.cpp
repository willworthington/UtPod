
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

void testSwap();
void testSongBoolOps();
void testGetNumSongs();
void testClearMemory();
void testSortSongList();
void testShuffle();

int main(int argc, char *argv[])
{
    testSwap();
    testSongBoolOps();
    testGetNumSongs();
    testClearMemory();
    testSortSongList();
    testShuffle();

    /*
    UtPod t;

    Song s1("Hey Jude1", "Beatles", 4);
    int result = t.addSong(s1);
    int result2 = t.getRemainingMemory();
    cout << "result = " << result << endl;
    cout << "remaining = " << result2 << endl;

    Song s2("Hey Jude2", "Beatles", 5);
    result = t.addSong(s2);
    result2 = t.getRemainingMemory();
    cout << "result = " << result << endl;
    cout << "remaining = " << result2 << endl;
    t.showSongList();

    cout << "Re-sorted: " << endl;
    t.sortSongList();
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
    */


}

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

    Song s3("Hey Jude3", "Beatles", 5);
    t.addSong(s3);
    Song s4("Hey Jude2", "Beatles", 2);
    t.addSong(s4);
    Song s5("Hey Jude1", "Apple", 5);
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