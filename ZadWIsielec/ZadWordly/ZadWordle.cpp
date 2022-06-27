
#include "Wordle.hpp"
#include <iostream>
#include <stdlib.h>

int main()
{
    Wordle game("BEADY");
    int attempts = 6;

    do
    {
       
    
        std::string word;
        std::cin >> word;
        std::string colours = game.test(word);
        std::cout << colours; 
        game.draw();
    } while (!game.isFinished());

  //  system("cls"); //czyœcimy konsole w prosty sposob, ogólnie niebezpieczny bo to jest komenda systemowa


    return 0;
}

