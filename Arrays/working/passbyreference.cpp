#include <iostream> 

using namespace std; 

void changeArray(int arr[], int size) { 
    cout << "\nIn function:\n"; 
    for(int i=0; i<size; i++){ 
        arr[i] *= 2;
        cout << arr[i] << " " ;  
    }
}

int main(){ 
    int numbers[5] = {10, 20, 30, 40, 50}; 

    changeArray(numbers, 5); 

    // changes done to the array in the function will reflect in the main function too 
    cout << "\n\nIn main:\n"; 
    for(int number : numbers){ 
        cout << number << " "; 
    }

    // in C++ the name of an array is a pointer which stores the address, in call by reference the address of the first element
    // is passed to the function instead of a making a copy in the stack frame. this increases execution speed immensely for arrays with larger sizes
    
}