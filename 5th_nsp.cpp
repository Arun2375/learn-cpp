#include <iostream>
using namespace std;
//Namespace provides a solution for preventing name conflicts in large projects. 
//Each entity needs a unique name.
//A namespace allows for identically named entities as lon as the namespace are different 
namespace first
{
    int x = 1;
} // namespace first
namespace second
{
    int x = 2;
} // namespace second
int main(){

    cout<< first :: x << '\n';
    cout<< second :: x << '\n';
    return 0;
}
