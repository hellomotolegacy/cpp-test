//Include our libraries, yo
#include <iostream>
#include <string>

//Global definitions
std::string blankChar = ""; //Used for Prompt
std::string Prompt = "Press ENTER to continue"; //FIXME - Find a better way :pp
std::string gen;
std::string gender;
std::string firstName;
std::string lastName;

int clear() //Used for 'clearing' the window
{
    std::cout << "\n\n";
}

int intro()
{
    std::cout << "what's gender?? (1 for male, 2 for female)\n";
    getline (std::cin, gen);
    if (gen == "1")
        gender = "boy";
    else
        gender = "girl";
    clear();
    std::cout << "oh so u r a " << gender << ". kewl.\n";
    std::cout << Prompt << "\n";
    getline (std::cin, blankChar);
    std::cout << "Sup fam give name xdddd\n";;
    getline (std::cin, firstName);
    clear();
    std::cout << firstName << "? That's a stupid name xdddddddddddd\n";
    std::cout << Prompt;
    getline (std::cin, blankChar);
    clear();
    std::cout << "ok " << firstName << ", what about your last name?\nis it as stupid?\n";
    getline (std::cin, lastName);
    clear();
    std::cout << "wow. " << firstName << " " << lastName << " is the dumbest name i've ever heard!\n";
    std::cout << Prompt;
    getline (std::cin, blankChar);
    clear();
}

int main()
{
    intro();
}