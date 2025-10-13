#include <iostream>
#include <ctime>
int main(){
    //Pseudo-random = Not truly random(but else)
    srand(time(NULL));                  // Step 1: Seed the random generator
    int num1 = (rand() % 20) + 1;       // Step 2: Generate random number between 1–20
    std::cout<<num1;                    // Step 3: Print the random number
    return 0;
}