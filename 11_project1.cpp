#include <iostream>
#include <cmath>
using namespace std;
//To calculate the hypotenuse of a right triangle we can find with this formula c=sqrt(pow(a,2))+pow(b,2)).
int main (){
    double a;
    double b;
    double c;
    
    cout<<"Enter side A: ";
    cin>>a;
    cout<<"Enter side B: ";
    cin>>b;

    a = pow(a,b);
    b = pow(b,2);
    c = sqrt(a+b);

    cout<<"side C: "<<c;
    return 0;
}