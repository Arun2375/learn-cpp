#include <iostream>
#include <vector>
//type def std:: vector<std::pair<std::string,int>>pairlist_t;                                  
/*typedef std::string text_t;
typedef int number_t;
int main(){
    //typedef = reserved keyword used to create an additional name (alias) for another datatype.
    //New identifier for an existing typehelps with readability and reduces typos.
    //Use when there is a clear benefit. Replaced with 'using' (work better with templates)
    text_t firstName = "Arun";
    number_t age = 21;
    std::cout<<firstName<<'\n';
    std::cout<<age<<'\n';
    return 0;
}
    */
//USING
using text_t = std :: string;
using number_t = int;
int main(){
    text_t firstName = "Arun";
    number_t age = 21;
    std::cout<<firstName<<'\n';
    std::cout<<age<<'\n';
    return 0;
}