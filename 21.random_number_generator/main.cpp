#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    // pseudo-random = NOT truly random (but-close)

    srand(time(NULL));

    short num1 = (rand() % 6) +1;
    short num2 = (rand() % 6) +1;
    short num3 = (rand() % 6) +1;

    std::cout << num1 << '\n' << num2 << '\n' << num3;

    return 0;
}
