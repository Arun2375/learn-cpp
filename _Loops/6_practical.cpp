#include <iostream>
// Print rows and columns
int main(){
    int rows;
    int columns;
    char symbols;

    std::cout<<"How many rows: \n";
    std::cin>>rows;

    std::cout<<"How many columns: \n";
    std::cin>>columns;

    std::cout<<"Enter a sumbol to use: \n";
    std::cin>>symbols;

    for (int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout<<symbols;
        }
        std::cout<<'\n';
    }
    return 0;
}
