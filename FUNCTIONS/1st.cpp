//#include <iostream>
//function = a block of reusable code
/*void happyBirthday(){
    std::cout<<"Happy Birhtday to you!\n ";
    std::cout<<"Happy Birthday to you!\n";
    std::cout<<"Happy Birthday to you dear \n";
    std::cout<<"Happy Birthday to you dear \n";
}
int main(){
    happyBirthday();
    happyBirthday();
    happyBirthday();
    return 0;
}
*/
#include <iostream>
#include <string>

// Function declaration
void happyBirthday(std::string name);

int main(){
    std::string name = "Bro";
    happyBirthday(name); // Function call
    return 0;
}

// Function definition
void happyBirthday(std::string name){
    std::cout<<"Happy Birthday to you "<<name<<'\n';
    std::cout<<"Happy Birthday to you "<<name<<'\n';
    std::cout<<"Happy Birthday to you "<<name<<'\n';
}
