#include <iostream>
/*int main(){
    std::string name;
    
    std::cout<<"Enter your name: ";
    std:: getline(std::cin,name);
    //Length mehtod
    if(name.length()>12)
    {
        std::cout<<"Your name can't be over 12 characters ";
    }
else{
    std::cout<<"Welcome "<<name;
}
return 0;
}
*/

//emtpy method
int main(){
    std:: string name;
    std::cout<<"Enter your name: ";
    std::getline(std::cin,name);

    // std:: string name2;
    // std::cout<<"Enter your name 2 : ";
    // std::getline(std::cin,name2);

    // if(name.empty()){
    //     std::cout<<"You didn't enter your name ";
    // }
    // else{
    //    std::cout<<"Hello "<<name<<'\n';
   // }
    //    std::cout<<"Your name has "<<name.length()<<" character "<<'\n';
    //    std::cout<<name.size();
    //    std::cout<<name.append(" Bro\n");
    //    std::cout<<name.insert(0, "Mr. ");
    //    std::cout<<name.erase(1,2)<<'\n';
    //    name.clear();
    //    std::cout<<name.at(1);
    //    std::cout<<name.find('n');
    // if(name. compare(name2) == 0){
    //     std::cout<<"Both are same";
    // }
    // else{
    //     std::cout<<"You have entered different names ";
    // }
    std::string part = name.substr(0, 4);
    std::cout<<part;
    return 0;
}
    
