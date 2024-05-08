#include <iostream>

int main(int argc, char const *argv[])
{
    
    int num;

    do{
        std::cout << "Enter a positive num: ";
        std::cin >> num;
    }while (num <= 0);
    
    std::cout << "Square of this num is: " << num*num;

    return 0;
}
