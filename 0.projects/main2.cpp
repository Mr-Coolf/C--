#include <iostream>

int main(int argc, char const *argv[])
{
    int grade = 2;
    std::string result = grade > 1 ? "You pass.": "You fail.";
    std::cout << result;
    return 0;
}
