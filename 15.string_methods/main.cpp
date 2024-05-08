#include <iostream>

int main(int argc, char const *argv[])
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    int a = name.length(); // To get name string length (int)
    bool c = name.empty(); // To check if string is empty (bool)
    name.clear(); // To delete all characters;
    name.append("@gmail.com"); // To add string to a string
    char b = name.at(0); // To get char at some index 
    name.insert(0, "fakeEmail"); // insert some string at the index 
    int charID = name.find('@'); // return id of an element. If there's none returns -1 
    name.erase(0, 3); // eliminates parts of string between index1 and index2


    std::cout << name;

    return 0;
}
