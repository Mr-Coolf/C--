#include <iostream>
#include <ctime>

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
    
    while (maxNum <= 0) {
        std::cout << "Enter maximum number: ";
        std::cin >> maxNum;
    }
    
    do{
        num = (rand() % maxNum) + 1;
        while (guessing)
        {
            do
            {
                std::cout << "Enter your guess: ";
                std::cin >> guess;
            } while (guess <= 0);            
            if (guess == num)
            {
                guessing = false;
            }
            else
            {
                std::cout << "It is not right! Try again.\n";
            }
            
        }
        std::cout << "Congratulations, you won!\n";
        do
        {
            std::cout << "Do you want to play again? (Y/n): ";
            std::cin >> playingAgain;
        } while (playingAgain != "n" && playingAgain != "N" && playingAgain != "no" && playingAgain != "No" && playingAgain!= "NO" && playingAgain != "nO" &&
        playingAgain != "Y" && playingAgain != "y" && playingAgain != "Yes" && playingAgain != "yes" && playingAgain != "yEs" && playingAgain != "yeS" && playingAgain != "YEs" && playingAgain != "yES" && playingAgain != "YES" );

        if (playingAgain == "n" || playingAgain == "N" || playingAgain == "no" || playingAgain == "No" || playingAgain== "NO" || playingAgain == "nO")
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
        
        
        
    }while(playing);

    return 0;
}
