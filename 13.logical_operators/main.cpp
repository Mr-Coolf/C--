#include <iostream>

int main(int argc, char const *argv[])
{
    // && = check if two conditions are true 
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand

    // int temp;

    // std::cout << "Enter temperature: ";
    // std::cin >> temp;

    // if (temp > 0 && temp < 30)
    // {
    //     std::cout << "The temp is good!";
    // }
    // else
    // {
    //     std::cout << "The temp is bad";
    // }

    // if (temp <= 0 || temp >= 30)
    // {
    //     std::cout << "The temp is bad!";
    // }
    // else
    // {
    //     std::cout << "The temp is good";
    // }
     
    // return 0;

    bool sunny = true;

    if (!sunny)
    {
        std::cout << "It is cloudy outside";
    }
    else
    {
        std::cout << "It is sunny outside";
    }
}
