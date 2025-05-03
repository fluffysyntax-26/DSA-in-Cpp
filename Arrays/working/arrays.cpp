#include <iostream> 

using namespace std; 

int main(){ 
    int numbers[5]; // declaring an array with size 5 

    int marks[] = {10,20, 67, 21,34,54,67}; // initialising an array (size can be skipped)
    double price[3] = {23.32, 56.32, 78.23}; 

    int marksLength = sizeof(marks) / sizeof(marks[0]);
    int priceLength = sizeof(price) / sizeof(price[0]); 

    // printing the contents of the marks array
    cout << "Marks: " << endl; 

    for(int i=0; i<marksLength; i++){ 
        cout << marks[i] << " "; 
    }

    // printing the contents of the price array
    cout << endl << endl << "Price: " << endl; 

    for(int i=0; i<priceLength; i++){ 
        cout << price[i] << " "; 
    }
    
    // taking input for the array 
    cout << endl << endl << "Enter 5 elements: " << endl; 
    for(int i=0; i<5; i++){ 
        cin >> numbers[i];
    }

    // using a for each loop
    cout << endl << "Numbers: " << endl; 
    for(int number : numbers){ 
        cout << number << " ";
    }
}