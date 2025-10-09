 #include <iostream>
 using namespace std;
 //cout:- (insertion operator)
 //cin:- (extraction operator)
 
 //Example
 int main(){
    string name;
    int age;
    cout<<"What is your full name? "<<'\n';
    // getline (cin,name);
    getline (cin>>ws,name);  
    cout<<"What is your age? ";
    cin>>age;
    cout<<"Hello "<<name<<'\n';
    cout<<"You are "<<age<<"years old.";
    return 0;
 }