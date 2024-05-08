#include <iostream>

int main(int argc, char const *argv[])
{
    // arithmetic operators = (- + * /)
    int students = 20;
    students = students + 1;
    students += 1;
    students++;
    std::cout << students << '\n';

    students = 20;
    students = students - 1;
    students -= 1;
    students--;
    std::cout << students << '\n';

    students = 20;
    students = students * 2;
    students *= 2;
    std::cout << students << '\n';

    students = 20;
    students = students / 2;
    students /= 2;
    std::cout << students << '\n';

    students = 20;
    int remainder = students % 2;
    std::cout << remainder << '\n';

    // First check for parenthesis
    // Second check for multiplication
    // Third check for addition and subtraction

    students = 6 - 5 + 4 * 3 / 2;
    std::cout << students << '\n';

    return 0;
}
