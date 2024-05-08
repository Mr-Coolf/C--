#include <iostream>

int main(int argc, char const *argv[])
{
    //type conversion = conversion a value of data type to another data type
    //                Implicit = automatic
    //                Explicit = Precede value with new data type (int)

    double x = (int) 3.14; //double -> integer

    std::cout << x << '\n';

    // char y = 100;
    // std::cout << y << '\n';

    std::cout << (char)100 << '\n';

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;

    std::cout << score << "%\n";

    return 0;
}
