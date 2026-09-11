// Hunter Gomulkiewicz
// MadLibs
// 09/11/2026

#include <iostream>
#include <conio.h>

using namespace std;

struct Entry
{
	string type;
	string input;
};

int main()
{
	const int NUM_ENTRIES = 15;
	Entry entries[NUM_ENTRIES] =
	{
		{"adjective", ""},
		{"noun", ""},
		{"verb", ""},
		{"adjective", ""},
		{"plural noun", ""},
		{"animal", ""},
		{"silly word", ""},
		{"verb ending in -ing", ""},
		{"place", ""},
		{"number", ""},
		{"adjective", ""},
		{"video game character", ""},
		{"weapon", ""},
		{"exclamation", ""},
		{"adverb", ""}
	};

	(void)_getch();
	return 0;
}