//Include our libraries, yo
#include <iostream>
#include <string>

//Global definitions
std::string Prompt = "Press ENTER to continue"; //FIXME - Find a better way :pp
std::string firstName;
std::string lastName;

int intro()
{
    std::cout << "Sup fam give name xdddd\n";;
    getline (std::cin, firstName);
    std::cout << firstName << "? That's a stupid name xdddddddddddd\n";
}

int main()
{
    intro();
}