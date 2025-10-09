#include <iostream>
//switch = alternatives to using "else if" statement 
//compares one value against switching case
/*int main(){
    int month;
    std::cout<<"Enter the month (1-12)";
    std::cin>>month;

    switch (month)
    {
    case 1:
        std::cout<<"January";
        break;
    case 2:
        std::cout<<"Feburary";
        break;
    case 3: 
        std::cout<<"March";
        break;
    case 4:
        std::cout<<"April";
        break;
    case 5:
        std::cout<<"May";
        break;
    case 6:
        std::cout<<"June";
        break;
    case 7:
        std::cout<<"July";
        break;
    case 8:
        std::cout<<"August";
        break;
    case 9:
        std::cout<<"September";
        break;
    case 10:
        std::cout<<"October";
    case 11:
        std::cout<<"November";
        break;
    case 12:
        std::cout<<"December";                
    default:
        std::cout<<"Please enter the number (1-12)";
        break;
    }
    return 0;

}
*/

//EXAMPLE 2.
int main(){
    char grade;
    std::cout<<"What letter grade: ";
    std::cin>>grade;

    switch (grade)
    {
    case 'A':
        std::cout<<"You did great";
        break;
    case 'B':
        std::cout<<"You did good";
        break;
    case 'C':
        std::cout<<"You did Ok!";
        break;
    case 'D':
        std::cout<<"You didn't do good";
        break;
    case 'E':
        std::cout<<"You failed";
        break;
    default:
        std::cout<<"Please only enter in a letter grade ('A' - 'F')";
        break;
    }
}