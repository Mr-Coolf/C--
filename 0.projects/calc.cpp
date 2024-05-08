#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "########### CALCULATOR ###########\n";

    char op;
    std::cout << "Select an operator (+, -, *, /): ";
    std::cin >> op;

    double num1;
    double num2;
    std::cout << "Type your first num: ";
    std:: cin >> num1;
    std::cout << "Type your second num: ";
    std:: cin >> num2;

    double result;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        std::cout << "Ur a piece of dogshit";
        break;
    }

    std::cout << "The result is: " << result << '\n';
    std::cout << "##################################";
    return 0;
}
