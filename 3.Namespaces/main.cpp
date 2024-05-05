#include <iostream>

namespace first {
    int x = 1;
}namespace second {
    int x = 2;
}

int main(int argc, char const *argv[])
{
    // int x = 0;
    // // :: - scope resolution operator

    // std::cout << x; // 0
    // std::cout << first::x; // 1
    // std::cout << second::x; // 2

    using namespace second;

    std::cout << x;
    std::cout << first::x;
    
    return 0;
}
