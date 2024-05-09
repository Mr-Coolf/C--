 #include <iostream>
#include <ctime>

int main()
{
    int guess;
    int rannum;
    srand(time(0));
    bool playing;
    int tries = 0;
    int range;
    std::string playerchoice;

    std::cout << "######### NUMGUESSR #########\n";
    std::cout << "Do you want to play? (Y/N)\n";
    std::cin >> playerchoice;

    // playing = (playerchoice.compare("Yes") == 1 ? true: false);
    playerchoice == "Y" ? playing = true: playing = false;

    
    do{
        if(playing == true){
            do{
            std::cout << "Pick a maximum number to guess: ";
                std::cin >> range;
            }while (range <= 0);
            int rannum = (rand() % range)+1;
            do
            {
            std::cout << "What is your guess?\n";
                std::cin >> guess;
                    guess < rannum ? std::cout << "Higher\n" : std::cout << "Lower\n";
            
                tries++;
            } while (guess != rannum);

            if(guess == rannum){
                std::cout << "GG you guessed!\n";
                    std::cout << "It took you " << tries << " tries.\n";
                std::cout << "Would you like to play again? (Yes/No)\n";
                    std::cin >> playerchoice;
                playerchoice == "Yes" ? playing = true: playing = false;
                tries = 0;
            }
        
    
        }
    }while (playing == true);
   
    if(playing == false){
        std::cout << "Bye Bye.";
    }
    return 0;
}