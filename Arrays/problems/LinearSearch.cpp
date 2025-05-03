#include <iostream> 
//given an array, search an element in the array 
using namespace std; 

int linearSearch(int arr[], int size, int key){ 
    for(int i=0; i<size; i++){ 
        if(key == arr[i]){ 
            cout << "Element found at index: " << i; 
        }
    }
    return -1; // Not found
}
int main(){

    int array[] = {29, 46, 20, 23, 77, 99, 96, 36, 37, 87, 80, 68, 75, 17, 18, 84, 43, 26, 47, 67, 70, 19, 54, 65, 58, 89, 31, 25, 83, 22, 10, 15, 97, 57, 40, 79, 44, 72, 94, 11, 60, 73, 69, 24, 64, 56, 33, 53, 74, 85, 76, 42, 32, 71, 51, 48, 66, 82, 61, 13, 41, 39, 38, 90, 55, 14}; 
    int arrayLength = sizeof(array) / sizeof(array[0]); 

    int key = 1; 

    if(linearSearch(array, arrayLength, key) == -1){
        cout << "Element not found "; 
    }
}