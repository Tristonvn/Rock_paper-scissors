/*  This projects aims to simulate a game of 
    rock, paper, scissors*/

#include <iostream>
#include <stdlib.h>

int main()
{
    srand(time(NULL));

    int computer = rand() % 3 + 1;
    
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";

    std::cout << "shoot! \n";

    std::cin >> user;
    std::string outcome;

    if (user == 1 && computer == 3) {

        outcome = "You win!";
        
    }
    else if (user == 2 && computer == 1) {
        outcome = "You win!";
        
    }
    else if (user == 3 && computer == 2) {
        outcome = "You win!";
       
    } 
    else if (user == 1 && computer == 2) {
        outcome = "You lose!";
        
    }
    else if (user == 2 && computer == 3) {
        outcome = "You lose!";
        
    }
    else if (user == 3 && computer == 1) {
        outcome = "You lose!";
        
    } 
    else {
        outcome = "You tied!";
    
    }

    std::cout << outcome;
}

