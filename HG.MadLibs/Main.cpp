// Hunter Gomulkiewicz
// MadLibs
// 09/11/2026

#include <iostream>
#include <conio.h>

using namespace std;

struct Entry
{
	string Type;
	string Input;
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

	for (int i = 0; i < NUM_ENTRIES; i++)
	{
		char firstLetter = entries[i].Type[0];
		bool isVowel = (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' || firstLetter == 'u');

		if (isVowel) cout << (i + 1) << ". Enter an " << entries[i].Type << ": ";
		else cout << (i + 1) << ". Enter a " << entries[i].Type << ": ";

		cin >> entries[i].Input;
	}

	char reply;
	bool isY, isN;
	do 
	{
		cout << "Do you want to fix any mistakes? ";
		reply = _getch();
		cout << reply << "\n";
		isY = (reply == 'y' || reply == 'Y');
		isN = (reply == 'n' || reply == 'N');
		if (isY)
		{
			int i;
			cout << "Which entry would you like to fix? ";
			cin >> i;

			char firstLetter = entries[(i - 1)].Type[0];
			bool isVowel = (firstLetter == 'a' || firstLetter == 'e' || firstLetter == 'i' || firstLetter == 'o' || firstLetter == 'u');

			if (isVowel) cout << i << ". Enter an " << entries[(i - 1)].Type << ": ";
			else cout << i << ". Enter a " << entries[(i - 1)].Type << ": ";

			cin >> entries[(i - 1)].Input;
		}
	} while (!isN);

	(void)_getch();
	return 0;
}