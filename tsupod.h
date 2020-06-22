/*
 * Tsupod.h
 *
 *  Created on: Apr 22, 2015
 *      Author: sephiroth
 */

#ifndef TSUPOD_H_
#define TSUPOD_H_

#include "Song.h"
#include <iostream>

using namespace std;

class Tsupod
{
private:
	struct SongNode {
		Song data;
		SongNode *next;
	};
	SongNode *songs;
	static const int MAX_MEMORY = 512;
		int memsize;

public:
		Tsupod();
		Tsupod(int newsize);
		~Tsupod();
		int addSong(Song s);
		int removeSong(string killtitle);
		void showSongList();
		void swap(SongNode *q, SongNode *r);
		void shuffle();
		void sortSongList();
		int getTotalmemory();
		int getRemainingmemory();
		int getSongnumber();
};


#endif /* TSUPOD_H_ */
