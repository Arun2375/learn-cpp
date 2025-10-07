#include <iostream>
using namespace std;

//Constants:- These are the variables whose value doesn't change during program
// Once value is assigned then can't be modified 
// Example 1.
// To find the area of a circle 
/*
int main(){
    const float PI = 3.14159;
    int radius = 5;
    float area = PI*radius*radius;
    cout<<"Area of Circle is: "<<area<<'\n';
    return 0;
}
*/
//Example 2. Programe to calculate the circumference of the circle 
int main(){
    const double PI = 3.14159;
    double radius = 5;
    double circumference = 2*PI*radius;
    cout<<"Circumference of the circle is "<<circumference<<'\n';
    return 0;
}