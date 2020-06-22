/*
 * Tsupod.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: sephiroth
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "Song.h"
#include "Tsupod.h"

using namespace std;

/* default constructor
 *
 */
Tsupod::Tsupod() {
	memsize = MAX_MEMORY;
	songs = NULL;
}
/* alternate constructor that allows for different memory size
 *
 */
Tsupod::Tsupod(int newsize) {
	if (newsize > 0 and newsize < MAX_MEMORY)
		memsize = newsize;
	else
		memsize = MAX_MEMORY;
	songs = NULL;
}
/*
 * DESTROY!
 */

Tsupod::~Tsupod()
{
	SongNode *d = songs;
	while (d!=NULL)
	{
		songs = songs->next;
		delete d;
		d = songs;
	}
	cout << "DESTROYED!" << endl;
}
/*
 * finding memory used
 */
int Tsupod::getTotalmemory() {
	int memory = 0;
	SongNode *p = songs;

	while (p!=NULL)
		{
		memory = memory + p->data.getSize();
		p = p->next;
		}
	return memory;
}

/* finding out memory remaining
 *
 */

int Tsupod::getRemainingmemory()
{
	int memoryleft = memsize - getTotalmemory();
	return memoryleft;
}
/*
 * finding number of songs
 */

int Tsupod::getSongnumber()
{
	int numsongs = 0;
	SongNode *p = songs;

	while (p!=NULL)
	{
		numsongs++;
		p = p -> next;

	}
	return numsongs;
}

/*
 * trying to add a song
 */

int Tsupod::addSong(Song s)
{
	int spaceused = getTotalmemory();
		if (spaceused + s.getSize() > memsize)
			return -2;
		if (s.getTitle() == " " or s.getArtist() == " " or s.getSize() <= 0)
			return -1;
		else
		{
			SongNode *temp = new SongNode;
			temp->data = s;
			temp->next = NULL;
			if (songs == NULL)
				songs = temp;
			else
			{
				temp->next = songs;
				songs = temp;
			}
			return 0;
		}
}

/*
 * removing a song
 */

int Tsupod::removeSong(string killtitle)
{
	SongNode *k = songs;
	SongNode *z = NULL;

	    if(songs == NULL)
	    {
	        return -1;
	    }
	    else if ((k->data.getTitle() == killtitle) and (z == NULL))
	    {
	        z = songs;
	        k = k->next;
	        delete z;
	        songs = k;
	        return 0;
	    }

	    k = k->next;
	    z = songs;

	        while(k != NULL)
	        {
	            if (k->data.getTitle() == killtitle)
	            {
	            z->next = k->next;
	            delete k;

	            return 0;
	            }

	            k = k->next;
	            z = z->next;

	        }
	         return -1;
}



/*
 * swapping a single song
 */
void Tsupod::swap(SongNode *q, SongNode *r)
{
	Song temp = q->data;
	q->data = r->data;
	    r->data = temp;
}

/*
 * show the list of songs
 */
void Tsupod::showSongList()
{
	SongNode *p = songs;

	while (p!=NULL)
	{
		cout << p->data.getTitle() << " " << p->data.getArtist() << " " << p->data.getSize()
				<< endl;
		p = p->next;
	}
	cout << endl;
}

/*
 * sorting the list
 */
void Tsupod::sortSongList()
{
	for (SongNode *i = songs; i!=NULL; i = i->next)
	{
		for(SongNode *j = i->next; j!=NULL; j = j->next)
		{
			if (i->data > j->data)
				swap(i, j);
		}
	}
}
/*randomizing the songs
 *
 */

void Tsupod::shuffle() {
	Song tempsong;
	int numsongs = getSongnumber();
	unsigned int currenttime = (unsigned) time(0);

	srand(currenttime);

	if (numsongs > 1) {
		for (SongNode *p = songs; p!=NULL; p=p->next)
		{
			int newspot = (rand() % numsongs);
			SongNode *r = songs;
			int i = 0;
			while (i < newspot)
			{
				i++;
				r=r->next;
			}
			swap(p, r);
		}
	}
}
