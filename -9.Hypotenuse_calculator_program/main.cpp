#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
    double a;
    double b;

    std::cin >> a;
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << c;

    return 0;
}
