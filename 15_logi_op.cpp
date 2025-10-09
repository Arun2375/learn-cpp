#include <iostream>
// && = checks if two conditions are true.
// || = checks if atleast one of two conditions is true.
// ! = reverses the logical state of it's operand.
/*
int main(){
    double temp;
    std::cout<<"Enter the temperature ";
    std::cin>>temp;

    if(temp > 0 && temp < 30){
        std::cout<<"The temperature is good ";
    }
    else{

      std::cout<<"The temperature is bad!";
    }
}
*/

//EXAMPLE 2. || OR operator
/*
int main(){
    double temp;
    std::cout<<"Enter the temperature. ";
    std::cin>>temp;
    
    if(temp <= 0 || temp >= 30){
        std::cout<<"The temperature is bad! ";
    }
    else{
        std::cout<<"The temeperature is good. ";
    }
    return 0;
}
    */
// EXAMPLE 3. ! NOT LOGICAL OPERATOR

int main(){
    int temp;
    bool sunny = true;

    std::cout<<"Enter the temperature: ";
    std::cin>>temp;

    if(temp <= 0 || temp >= 30){
        std::cout<<"The temperature is bad! ";
    }
    else{
        std::cout<<"The temperature is good ";
    }
    if(sunny){
        std::cout<<"It is sunny outside ";
    }
    else{
        std::cout<<"it is cloudy outside ";
    }
    return 0;
}