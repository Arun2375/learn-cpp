/*#include <iostream>
using namespace std;
int main(){
    double x = 3;
    double y = 4;
    double z;
    z = max(x,y);
    z = min(x,y);
    cout<<z;
    return 0;
}*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double x = 3.7;
    //double y = 4;
    double z;
    // z = pow(2,4);   
    // z = sqrt (9);
    // z = abs (-3);              //abs = absolute--> gives magnitude value--> remove '-'
    //z = round(x);              // gives nearest integer --> 4.4= 4:  4.6= 5.
    z = ceil(x);               // gives smallest integer larger then the value 
    //z = floor(x);              //gives largest integer larger then the value.
    cout<<z;
    return 0;
}