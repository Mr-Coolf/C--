#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int guess = 0;
    int num;
    int tries;
    int maxNum = 0;
    bool playing = true;
    bool guessing = true;
    std::string playingAgain;

    std::cout << "***** NUMBER GUESSING GAME *****\n";
    do
    {
        maxNum = 0;
        while (maxNum <= 0)
        {
            std::cout << "Enter maximum number: ";
            std::cin >> maxNum;
        }
        num = (rand() % maxNum) + 1;
        guessing = true;
        while (guessing)
        {
            do
            {
                std::cout << "Enter your guess: ";
                std::cin >> guess;
            } while (guess <= 0);
            tries++;
            if (guess == num)
            {
                guessing = false;
            }
            else
            {
                std::cout << (guess > num ? "Try lower.\n" : "Try higher.\n");
            }
        }
        if (tries == 1)
            std::cout << "Congratulations, you won!\nIt took you just " << tries << " try!\n";
        else
            std::cout << "Congratulations, you won!\nIt took you just " << tries << " tries!\n";
        do
        {
            std::cout << "Do you want to play again? (Y/n): ";
            std::getline(std::cin >> std::ws, playingAgain);
        } while (playingAgain != "n" && playingAgain != "N" && playingAgain != "no" && playingAgain != "No" && playingAgain != "NO" && playingAgain != "nO" &&
                 playingAgain != "Y" && playingAgain != "y" && playingAgain != "Yes" && playingAgain != "yes" && playingAgain != "yEs" && playingAgain != "yeS" && playingAgain != "YEs" && playingAgain != "yES" && playingAgain != "YES");

        if (playingAgain == "n" || playingAgain == "N" || playingAgain == "no" || playingAgain == "No" || playingAgain == "NO" || playingAgain == "nO")
        {
            playing = false;
        }
        else if (playingAgain != "Y" || playingAgain != "y" || playingAgain != "Yes" || playingAgain != "yes" || playingAgain != "yEs" || playingAgain != "yeS" || playingAgain != "YEs" || playingAgain != "yES" || playingAgain != "YES")
        {
            guessing = true;
            playing = true;
        }
        else
        {
            std::cout << "go kys";
            playing = false;
        }
        std::cout << '\n';

    } while (playing);

    std::cout << "Thanks for playing!\n";
    
    using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono; // nanoseconds, system_clock, seconds

    sleep_for(seconds(5));

    return 0;
}
