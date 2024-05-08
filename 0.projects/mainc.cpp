#include <iostream>

int main(int argc, char const *argv[])
{
    
    int sideLength;
    std::string symbol;
    std::cout << "Enter your side length: ";
    std::cin >> sideLength;
    std::cout << "Enter symbol which you want to use: ";
    std::cin >> symbol;

    std::string result = "";

    for (int i = 0; i < sideLength; i++)
    {
        for (int j = 0; j < sideLength; j++)
        {
            result += (symbol + " ");
        }
        result += "\n";
    }

    std::cout << result;

    return 0;
}
