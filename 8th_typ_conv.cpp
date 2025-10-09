#include <iostream>
using namespace std;
// Type conversion = conversion a value of one datatype to another 
//Implicit:- Automatic
//Explicit:- Precede value with new datatype(int)
//EXAMPLE 1.
int main(){
    // double x = (int)3.14159;
    // cout<<x;

    //EXAMPLE 2.
    // char x = 100;
    // cout<<x;
    // cout<<(char)100;

    //EXAMPLE 3.
    int correct = 8;
    int question = 10;
    double score = correct/(double)question*100;
    cout<<score<<"%"<<'\n';
    return 0;
}