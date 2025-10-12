#include <iostream>
// While loop → Repeats a block of code as long as the condition is true.
// Entry-controlled loop → Condition is checked before execution.
// Used when number of iterations is not fixed.
// Stops when the condition becomes false.
int main(){
    std:: string name;
    while (name.empty()){
       std::cout<<"enter your name: ";
       std::getline(std::cin,name);
    }
    std::cout<<"Hello "<<name;
    return 0;
}