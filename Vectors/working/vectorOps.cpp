#include<iostream> 
#include<vector> 

using namespace std; 

int main(){ 
    vector<int> numbers = {10,20,30,40,50}; 

    // Adding an element to the end of the vector (appending) 
    numbers.push_back(25); 

    // Delete an element from the back 
    numbers.pop_back(); 

    // size of vector
    cout << "Size of the Vector: " << sizeof(numbers) << " Bytes" << endl; 
    cout << "Number of Elements: " << numbers.size() << endl; 

    // capacity of vector
    cout << "Capacity of the Vector: " << numbers.capacity() << endl; 

    // print the first value of the vector 
    cout << "First Value of the Vector: "  << numbers.front() << endl ; 

    // print the last value of the vector 
    cout << "Last Value fo the Vector: " << numbers.back() << endl; 

    // Accessing a value at a Particular index 
    cout << "Element at Index 3: " << numbers.at(3) << endl; 

    // Display the Elements using a for each loop  
    for(int number : numbers){ 
        cout << number << " "; 
    }

}