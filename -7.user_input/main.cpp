#include <iostream>

int main(int argc, char const *argv[])
{
    // cout >> (insertion operator)
    // cin >> (extraction operator)
    std::string name;
    int age;

    std::cout << "What's your full name?: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "How old are you?: ";
    std::cin >> age;    

    std::cout << "Hello, " << name << ".\nYou are " << age << " years old";

    return 0;
}
