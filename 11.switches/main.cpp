#include <iostream>

int main(int argc, char const *argv[])
{
    // int month;
    // std::cout << "Enter the month (1-12): ";
    // std::cin >> month;

    // switch (month)
    // {
    // case 1:
    //     std::cout << "It is January";
    //     break;
    // case 2:
    //     std::cout << "It is February";
    //     break;
    // case 3:
    //     std::cout << "It is March";
    //     break;
    // case 4:
    //     std::cout << "It is April";
    //     break;
    // case 5:
    //     std::cout << "It is May";
    //     break;
    // case 6:
    //     std::cout << "It is June";
    //     break;
    // case 7:
    //     std::cout << "It is July";
    //     break;
    // case 8:
    //     std::cout << "It is August";
    //     break;
    // case 9:
    //     std::cout << "It is September";
    //     break;
    // case 10:
    //     std::cout << "It is October";
    //     break;
    // case 11:
    //     std::cout << "It is November";
    //     break;
    // case 12:
    //     std::cout << "It is December";
    //     break;    
    // default:
    //     std::cout << "Enter numbers from 1 to 12";
    //     break;
    // }

    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "Great!";
        break;
    case 'B':
        std::cout << "Good!!";
        break;
    case 'C':
        std::cout << "Okay!";
        break;
    case 'D':
        std::cout << "Not good.";
        break;
    case 'F':
        std::cout << "YOU FAILED!";
        break;
    
    default:
        std::cout << "Enter a letter grade (A-F)!";
        break;
    }


    return 0;
}
