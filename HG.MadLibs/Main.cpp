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

	cout << "The Ultimate Video Game Quest\n\n";
	cout << "One day, I booted up my favorite video game and discovered a " << entries[0].Input << " portal inside the main menu.\n";
	cout << "Without thinking twice, I grabbed my " << entries[1].Input << " and decided to " << entries[2].Input 
		 << " straight into it.\n";
	cout << "On the other side, I found myself in a " << entries[3].Input << " kingdom filled with hundreds of " 
		 << entries[4].Input << ".\n";
	cout << "Suddenly, a giant " << entries[5].Input << " appeared in front of me and shouted, \"" << entries[6].Input << "!\"\n";
	cout << "I tried " << entries[7].Input << " away, but the mysterious creature chased me all the way to " 
		 << entries[8].Input << ".\n";
	cout << "There, I discovered that I had only " << entries[9].Input << " seconds to save the world!\n";
	cout << "Just when everything seemed hopeless, a " << entries[10].Input << " hero named " << entries[11].Input 
		 << " appeared, carrying a powerful " << entries[12].Input << ".\n";
	cout << "\"" << entries[13].Input << "\" the hero yelled.\n";
	cout << "Together, we defeated the final boss and saved the game world. I returned home and " << entries[14].Input
		 << " turned off my console.\n";
	cout << "\nThe End.\n";

	(void)_getch();
	return 0;
}