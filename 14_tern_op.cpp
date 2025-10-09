#include <iostream>
//ternary operator ? : a replacement to an if/else statement
// condition ? expression : expression 2;
/*int main(){
    int grade = 40;
    grade >= 60 ? std::cout<<"You pass":std::cout<<"You failed";
    return 0;
}
*/
//EXAMPLE 2. No. even or odd
/*int main(){
    int number = 2;
    number % 2 ? std::cout<<"Odd" : std::cout<<"Even";
    return 0;
}
*/

//EXAMPLE 3. 
int main(){
    bool hungry = false;
    //std::cout<<(hungry ? "You are hungry " : "You are full ");
    hungry ? std::cout<<"you are hungry " : std::cout<<"you are full ";
    return 0;
}
