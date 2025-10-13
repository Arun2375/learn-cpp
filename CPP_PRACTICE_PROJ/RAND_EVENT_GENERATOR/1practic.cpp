#include <iostream>
#include <ctime>
int main(){
     // Seed the random number generator with the current time
    // This ensures you get different random numbers each time you run the program
    srand (time(NULL));
        // Generate a random number between 1 and 5

    int randNum = rand() % 5 + 1;
        // Use a switch statement to decide the prize based on the random number

    switch (randNum)
    {
    case 1: std::cout<<"You win a bumper sticker! \n ";
        break;
    case 2: std::cout<<"You win a free lunch \n";
        break;
    case 3: std::cout<<"You win a t-shirt! \n";
        break;
    case 4: std::cout<<"You win a gift card \n";
        break;
    case 5: std::cout<<"You win a concent ticket \n";
        break;
    }
    return 0;
}