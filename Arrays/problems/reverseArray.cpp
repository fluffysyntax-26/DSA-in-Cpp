#include <iostream> 

using namespace std; 

void reverseArray(int arr[], int size){ 
    int start = 0; 
    int end = size - 1; 

    while(start < end){ 
        swap(arr[start], arr[end]); 
        start++; 
        end--; 
    }

    for (int i=0; i<size; i++){ 
        cout << arr[i] << " "; 
    }
}
int main(){ 

    int size1 = 9; 
    int size2 = 16; 

    int array1[] = {10, 20, 30, 40, 50, 60, 70 , 80, 90}; 
    int array2[] = {160, 150, 140, 130, 120, 110, 100, 90, 80, 70, 60, 50, 40, 30, 20, 10}; 

    reverseArray(array1, size1); 
    cout << endl; 
    reverseArray(array2, size2); 
}