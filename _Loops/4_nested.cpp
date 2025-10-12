#include <iostream>
// Nested loop -> A loop inside another loop, inner loop runs completely for each iteration of outer loop
int main(){
    for (int i = 1; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
            std::cout<<j<<' ';
        }
        std::cout<<i<<'\n';
    }
    return 0;
}