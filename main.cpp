//Include our libraries, yo
#include "stdafx.h"
#include <iostream>
#include <string>

//Global definitions
std::string blankChar = ""; //Used for Prompt
std::string Prompt = "Press ENTER to continue"; //FIXME - Find a better way :pp
std::string gen;
std::string gender;
std::string firstName;
std::string lastName;

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
	std::cout << "Your journey awaits! Go experience amazing things and meet new people!\n";
	pause();
}

int main()
{
    intro();
}