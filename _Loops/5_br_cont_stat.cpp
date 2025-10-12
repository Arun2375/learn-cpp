#include <iostream>
// Break -> Immediately exits the loop, no matter the condition
// Continue -> Skips the current iteration and jumps to the next iteration of the loop
int main(){
    for (int i = 1; i <= 20; i++){
    if (i == 13){
        // continue;
        break;
    }
    std::cout<<i<<'\n';
}
    return 0;
}
