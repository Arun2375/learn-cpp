#include <iostream>
using namespace std;
/*
// An array is a collection of elements of the same data types, stored in contiguous memory location.
// It allows us to store and access multiple values using a single variable name with an index.
int main(){
    // 1. declaring and initializing an array of size 5
    //int arr[5] = {2, 3, 4, 5, 6};
    int arr [5] = {2, 3, 4};  //Partial initializing
    // printing array elements
    for (int i = 0; i < 5; i++){
        cout<<arr[i]<< " ";
    }
}
*/
/*
// 2.ACCESING ARRAY ELEMENTS
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    // accessing first element.
    cout << arr[0] << " ";
    // accessing fourth element.
    cout << arr[3];
    return 0;
}
*/

//UPDATE ARRAY ELEMENTS
/*int main(){
    int arr[4] = {1, 2, 3, 4};
    //Updating first element
    arr[1] = 12;
    cout << arr[1];
    return 0;
}
*/

//TRAVERSE ARRAY
//visiting each element 1 by 1, using loop that runs from 0 to size - 1.
/*
int main(){
    int arr[4] = {1, 2, 3, 4};
    //traversing and printing the array.
    for (int i = 0; i < 4; i++){
        cout<<arr[i]<<" ";
    }
}
*/

//SIZE OF ARRAY

// The sizeof() operator helps to find the memory usage of an array.
// It can also be used to calculate the total number of elements using:
// sizeof(array) / sizeof(array[0])

int main(){
   // char arr[] = {'a', 'b', 'c', 'd', 'e'};
    string arr[] = {"Arun", "Aditya", "Danishwer", "Raju"};
    // size of one element in an array
    cout<<"size of arr[0]: "<<sizeof(arr[0])<<endl;

    // size of 'arr'
    cout<<"size of 'arr' "<<sizeof(arr)<<endl;

    // length of an array
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length of an arr "<<n<<endl;
    return 0;
}

// ARRAYS AND POINTERS
int main (){
    
}
