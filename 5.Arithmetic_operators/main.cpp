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

    students = 20;
    students = students / 2;
    return 0;
}
