#include <iostream>
#include <ctime>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int randInt = (rand() % 5) + 1;
    
    switch (randInt)
    {
    case 1:
        std::cout << "You win a bumper sticker!\n";
        break;
    case 2:
        std::cout << "You win a t-shirt!\n";
        break;
    case 3:
        std::cout << "You win a free lunch!\n";
        break;
    case 4:
        std::cout << "You win a gift card!\n";
        break;
    case 5:
        std::cout << "You win concert tickets!\n";
        break;    
    default:
        std::cout << "tf";
        break;
    }

    return 0;
}
