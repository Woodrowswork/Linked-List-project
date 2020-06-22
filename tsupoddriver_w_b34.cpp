/*
 * Tsupod2driver.cpp
 *
 *  Created on: Apr 8, 2015
 *      Author: sephiroth
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include "Song.h"
#include "Tsupod.h"

using namespace std;

int main ()
{
	Tsupod kill;
	int altsize;

	cout << "What would you like the Tsupod size to be?" << endl;
	cin >> altsize;

	kill = Tsupod(altsize);

	Song s1 ("I love rock and roll", "Joan Jett", 10);
	int retcode = kill.addSong(s1);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s2 ("This song has not artist", " ", 15);
	retcode = kill.addSong(s2);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s3 (" ", "This song has not title", 20);
	retcode = kill.addSong(s2);
	cout << "the result was " << retcode << endl;

	kill.showSongList();

	Song s4 ("This song has not size", "So empty", 0);
	retcode = kill.addSong(s4);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s5 ("This song is too big", "so HUGE", 513);
	retcode = kill.addSong(s5);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s6 ("It ees known khaleesi", "Doreah", 3);
	retcode = kill.addSong(s6);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s7 ("Stick'em with the pointy end", "Jon Snow", 2);
	retcode = kill.addSong(s7);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s8 ("Hodor", "Hodor", 1);
	retcode = kill.addSong(s8);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s9 ("I name Jaqen H'gar", "Arrya Stark", 3);
	retcode = kill.addSong(s9);
	cout << "The result was "<< retcode << endl;

	kill.showSongList();

	Song s10 ("Where is my head?", "Ned Stark", 5);
	retcode = kill.addSong(s10);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s11 ("No more climbing!", "Catelyn Stark", 3);
	retcode = kill.addSong(s11);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s12 ("The night is dark and full of terrors", "Melisandre", 4);
	retcode = kill.addSong(s12);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	retcode = kill.removeSong("The night is dark and full of terrors");
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s13 ("Hermoine Granger is the greatest witch in all the land", "Sirius Black", 15);
	retcode = kill.addSong(s13);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s14 ("Where are my dragons?", "Daenyrs Targaryen", 12);
	retcode = kill.addSong(s14);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	Song s15 ("Where are my dragons?", "Daenyrs Targaryen", 10);
	retcode = kill.addSong(s15);
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	retcode = kill.removeSong("No more climbing!");
	cout << "The result was " << retcode << endl;

	kill.showSongList();

	retcode = kill.removeSong("This song isn't here!");
	cout << "The result was " << retcode << endl;



	kill.sortSongList();
	kill.showSongList();

	kill.shuffle();
	kill.showSongList();


	return 0;


}




