#include<iostream>
// Do-while loop -> Executes the block at least once and repeats while condition is true.
int main(){
    int number;
    do{
        std::cout<<"Enter a positive # : ";
        std::cin>>number;
    } while (number < 0);
        std::cout<<"This # is: "<<number;
    return 0;
}
