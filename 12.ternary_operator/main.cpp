#include <iostream>

int main(int argc, char const *argv[])
{
    // ternary operator ?: replacement to a simple if/else statement
    //condition ? ifTrue: ifFalse
    // int grade = 75;

    // std::string result = grade >= 60 ? "You pass" : "You fail";

    // std::cout << result;

    // int num = 9;
    // std::string res = num % 2 == 0 ? "Even" : "Odd";
    // std::cout << res;


    bool hungry = true;
    std::string res = hungry ? "U r hungry" : "U r full";
    std::cout << res;

    return 0;
}
