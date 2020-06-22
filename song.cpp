/*
 * Song.cpp
 *
 *  Created on: Apr 22, 2015
 *      Author: sephiroth
 */

#include <string>
#include "Song.h"

using namespace std;

/* default song constructor
 *
 */
Song::Song()
{
	title = " ";
	artist = " ";
	size = 0;
}
/* complete constructor
 *
 */
Song::Song(string _title, string _artist, int _size)
{
	title = _title;
	artist = _artist;
	size = _size;
}

/* attempting to make > work
 *
 */

bool Song::operator > (Song const &rhs)
{
	if (title != rhs.title)
	return (title > rhs.title);
	else
	{
		if (artist != rhs.artist)
			return (artist > rhs.artist);
		else
		{
			if (size != rhs.size)
				return (size > rhs.size);
		}
	}
}

/* attempting to make < work
 *
 */

bool Song::operator < (Song const &rhs)
{
	if (title != rhs.title)
	return (title < rhs.title);
	else
	{
		if (artist != rhs.artist)
			return (artist < rhs.artist);
		else
		{
			if (size != rhs.size)
				return (size < rhs.size);
		}
	}
}
/* attempting to make == work
 *
 */

bool Song::operator == (Song const &rhs)
{
	return (title == rhs.title and artist == rhs.artist and size == rhs.size);
}

/*attempting to make != work
 *
 */

bool Song::operator != (Song const &rhs)
{
	if (title == rhs.title and artist == rhs.artist and size == rhs.size)
		return false;
	else
		return true;

}



