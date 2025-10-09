#include <iostream>
using namespace std;
//It's named memory location that stores data
//Two steps to creating and using a variables
//1. Declaration 
//2. Assignment
/*int main(){
    // int x;             // Declaration
    // x = 5;             //Assignment
    // cout<<x;
//This way is used when we don't know the value at the begning
    int x = 5;
    int y = 2;
    int sum = x + y;
    cout<<"x: "<<x<<'\n';
    cout<<"y: "<<y<<'\n';
    cout<<"The sum of x and y is: "<<sum<<'\n';
    return 0;
}
    */

// TYPES OF VARIABLES

    int num = 100;            //Global Variable
int main(){
    int age = 20;             //Local variable 
    static int count = 0;     //static variable 

    cout<<"Age: "<<age<<'\n';
    cout<<"Num: "<<num<<'\n';
    cout<<"Count: "<<count<<'\n';
    return 0;    
}


    
 


