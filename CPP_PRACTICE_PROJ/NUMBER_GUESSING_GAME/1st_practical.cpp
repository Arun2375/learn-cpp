#include <iostream>
#include <ctime>
int main()
{
    int num;              //no. randomly generated 
    int guess;            //hold the current player
    int tries;            //tries to take the user to guess the correct no.
    srand(time(NULL));
    num = (rand() % 100)+ 1;
    std::cout<<"************Number Guessing Game***********\n";
    do{
        std::cout<<"Enter a guess between (1-100): ";
        std::cin>>guess;

        if(guess > num){
            std::cout<<"Too high! \n";
        }
        else if (guess < num)
        {
            std::cout<<"Too low! \n";
        }
        else{
            std::cout<<"Correct ! # of tries: "<<tries<<'\n';
        }   
    }while (guess != num);
        std::cout<<"***********Number Guessing Game *********** \n";
        return 0;   
}