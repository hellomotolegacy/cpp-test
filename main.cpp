//Include our libraries, yo
#include <iostream>
#include <string>

//Global definitions
std::string Prompt = "Press ENTER to continue"; //FIXME - Find a better way :pp
std::string firstName;
std::string lastName;

int main()
{
    std::cout << "xd\n";
    std::cout << Prompt;
    getline (std::cin, firstName);
    std::cout << "xd " << firstName << "\n";
}