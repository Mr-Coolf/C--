#include <iostream>

int main(int argc, char const *argv[])
{
    int rows;
    int columns;
    std::string symbol;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> columns;
    std::cout << "Enter a character: ";
    std::cin >> symbol;
    symbol = symbol.at(0);

    std::string result = "";
    
    for (int j = 0; j < rows; j++)
    {
        for (int i = 0; i < columns; i++)
        {
            result += (symbol + " ");
        }
        result += ("\n");
    }
    
    std::cout << result;

    return 0;
}
