#include<iostream> 

using namespace std; 

int main(){ 
    int number; 

    cout << "Enter a number to find number of digits: "; 
    cin >> number; 

    int digits = 0; 

    while(number > 0){ 
        number /= 10; 
        digits++; 
    }

    cout << "Number of digits: " << digits; 
}