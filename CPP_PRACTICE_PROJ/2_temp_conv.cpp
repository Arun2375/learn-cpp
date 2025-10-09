#include <iostream>
// Fahrenheit to celsius or Celsius to Fahrenheit
int main(){
    double temp;       //Temperature
    char unit;         //select celsius or Farenheit

    std::cout<<"*******Temperature Conversion******* ";
    std::cout<<"F=Fahrenheit\n";
    std::cout<<"C=Celsius\n";
    std::cout<<"What unit would you like to convert to: ";
    std:: cin>>unit;
    
    if(unit=='F' || unit=='f'){
        std::cout<<"Enter the temperature in Celsius: ";
        std::cin>>temp;
        temp = (1.8*temp)+3.0;
        std::cout<<"Temperature is: "<<temp<<"F\n";
    }
    else if(unit=='C' || unit=='c'){
        std::cout<<"Enter the temperature in Fahrenheit: ";
        std::cin>>temp;
        temp=(temp-32)/1.8;
        std::cout<<"Temperature is: "<<temp<<"C\n";
    }
    else{
        std::cout<<"Please enter in only C or F ";
    }
    std::cout<<"************";

return 0;
}