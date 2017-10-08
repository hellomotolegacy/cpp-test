//Include our libraries, yo
#include "stdafx.h"
#include <iostream>
#include <string>

//Global definitions
std::string getDir;
std::string blankChar = ""; //Used for Prompt
std::string Prompt = "Press ENTER to continue"; //FIXME - Find a better way :pp
std::string gen;
std::string gender;
std::string firstName;
std::string lastName;
int direction;

void clear() //Used for 'clearing' the window
{
    std::cout << "\n\n";
}

void pause() //Press ENTER thing
{
    std::cout << Prompt;
    getline (std::cin, blankChar);
    clear();
}

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

void getDirection()
{
	clear();
	std::cout << "What will you do?\n";
	getline (std::cin, getDir);
	//take whatever the player says and convert it to make traveling easier
	calcDir();
}

void travelTo(std::string north, std::string east, std::string south, std::string west)
{
	std::cout << "To the North " << north << ".\n";
	std::cout << "To the East " << east << ".\n";
	std::cout << "To the South " << south << ".\n";
	std::cout << "To the West " << west << ".\n";
	getDirection();
}

void spawn()
{
	std::cout << "You awaken in a patch of grass.\n";
	pause();
	std::cout << firstName << ": Was I only dreaming?\n";
	pause();
	travelTo("lies a forest", "lies a house", "there is a large stone wall", "the valley continues");
	std::cout << getDir;
	pause();
}

void getFirstName()
{
	std::cout << "What's your first name?\n";;
    getline (std::cin, firstName);
	if (strlen(firstName.c_str()) > 15)
	{
		std::cout << "That's a bit too long, try again.\n";
		pause();
		getFirstName();
	}
    clear();
    std::cout << firstName << "? What a lovely name!\n";
}

void getLastName()
{
	std::cout << "Alright " << firstName << ", what's your last name?\n";
    getline (std::cin, lastName);
	if (strlen(lastName.c_str()) > 15)
	{
		std::cout << "\nThat's a bit too long, try again.\n";
		pause();
		getLastName();
	}
}

void intro()
{
	std::cout << "Hello!\n";
	pause();
	std::cout << "My name is <FIXME>!\n";
	pause();
	std::cout << "<FIXME>\n";
	pause();
    std::cout << "So tell me, are you a boy (1), or a girl (2)?\n";
    getline (std::cin, gen);
    if (gen == "1")
        gender = "boy";
    else
        gender = "girl";
    clear();
    std::cout << "Ah, so you're a " << gender << "!\n";
    pause();
	getFirstName();
    pause();
    getLastName();
    clear();
    std::cout << "So you're " << firstName << " " << lastName << ". Great!\n";
    pause();
	std::cout << firstName << "!\n";
	pause();
	std::cout << "<FIXME>\n";
	pause();
	spawn();
}

int main()
{
    intro();
}