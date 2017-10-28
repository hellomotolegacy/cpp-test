//Include our libraries
#include "stdafx.h"		//Comment me if NOT using VisualStudio!
#include <iostream>
#include <string>

//Include our areas
#include "area1.h"

using namespace std;

//Global definitions
string getDir;
string blankChar = ""; //Used for the 'Press ENTER to Continue' prompt
string Prompt = "Press ENTER to continue"; //FIXME - Find a better way :pp
string gen;
string gender;
string firstName;
string lastName;
int direction;

//'Clear' the window using two line breaks.
void clear()
{
    cout << "\n\n";
}

//Print the 'Press ENTER to Continue' text and insert a getline so if we actually hit enter, we move on
void pause()
{
    cout << Prompt;
    getline (cin, blankChar);
    clear();
}

// Convert whatever the user says into a number (1-4) to make moving easier.
void calcDir()
{
	if (getDir == "go north") direction = 1; return;
	if (getDir == "north") direction = 1; return;
	if (getDir == "up") direction = 1; return;
	if (getDir == "go south") direction = 3; return;
	if (getDir == "south") direction = 3; return;
	if (getDir == "down") direction = 3; return;
	if (getDir == "go west") direction = 4; return;
	if (getDir == "west") direction = 4; return;
	if (getDir == "left") direction = 4; return;
	if (getDir == "go east") direction = 2; return;
	if (getDir == "east") direction = 2; return;
	if (getDir == "right") direction = 2; return;
}

//For entering where you want to travel
void getDirection()
{
	clear();
	cout << "What will you do?\n";
	getline (cin, getDir);
	calcDir();	//Execute the function above to convert.
}

//Used to make traveling a LOT easier, one function instead of multiple outputs.
void travelTo(string north, string east, string south, string west)
{
	cout << "To the North " << north << ".\n";
	cout << "To the East " << east << ".\n";
	cout << "To the South " << south << ".\n";
	cout << "To the West " << west << ".\n";
	getDirection();
}

//Executed directly after going through the introduction, welcome to the game!
void spawn()
{
	cout << "You awaken in a patch of grass.\n";
	pause();
	cout << firstName << ": Was I only dreaming?\n";
	pause();
	travelTo("lies a forest", "lies a house", "there is a large stone wall", "the valley continues");	//Run travelTo, optimization!
	switch(direction)
	{
		case 1: North1(); break;
		case 2: East1(); break;
		case 3: South1(); break;
		case 4: West1(); break;
	}
	pause();
}

//For entering first name, seperate function so if the player enters something longer than 15 characters
//We just re-run the function instead of going through the whole introduction again.
void getFirstName()
{
	cout << "What's your first name?\n";;
	getline (cin, firstName);
	if (strlen(firstName.c_str()) > 15)
	{
		cout << "That's a bit too long, try again.\n";
		pause();
		getFirstName();
	}
	clear();
	cout << firstName << "? What a lovely name!\n";
}

//Same purpose as getFirstName, but is applied for the user's last name.
void getLastName()
{
	cout << "Alright " << firstName << ", what's your last name?\n";
	getline (cin, lastName);
	if (strlen(lastName.c_str()) > 15)
	{
		cout << "\nThat's a bit too long, try again.\n";
		pause();
		getLastName();
	}
}

//Choose your gender, get your name, introduce you to the game's plot
// FIXME - Need a plot!
void intro()
{
	cout << "Hello!\n";
	pause();
	cout << "My name is <FIXME>!\n";
	pause();
	cout << "<FIXME>\n";
	pause();
	cout << "So tell me, are you a boy (1), or a girl (2)?\n";
	getline (cin, gen);
	if (gen == "1")
		gender = "boy";
   	 else
        	gender = "girl";	//FIXME - Make this it's own function so if the user chooses anything but 1 or 2 it wont't default to female.
    	clear();
    	cout << "Ah, so you're a " << gender << "!\n";
    	pause();
	getFirstName();
    	pause();
    	getLastName();
    	clear();
    	cout << "So you're " << firstName << " " << lastName << ". Great!\n";
    	pause();
	cout << firstName << "!\n";
	pause();
	cout << "<FIXME>\n";
	pause();
	spawn();
}

// Run our intro function
int main()
{
    	intro();
}