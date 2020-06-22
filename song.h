/*
 * Song.h
 *
 *  Created on: Apr 22, 2015
 *      Author: sephiroth
 */

#ifndef SONG_H_
#define SONG_H_

#include <string>

using namespace std;

class Song
{
private:
	string title;
	string artist;
	int size;

public:
	Song ();
	Song (string title, string artist, int size);

	void setTitle (string t)
	{
		title = t;
	}

	string getTitle() const
	{
		return title;
	}

	void setArtist (string a)
	{
		artist = a;
	}
	string getArtist() const
	{
		return artist;
	}

	void setSize (int s)
	{
		size = s;
	}

	int getSize () const
		{
			return size;
		}

	bool operator > (Song const &rhs);
	bool operator < (Song const &rhs);
	bool operator == (Song const &rhs);
	bool operator != (Song const &rhs);

};



#endif /* SONG_H_ */
