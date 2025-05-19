#include <iostream>

using namespace std; 

void printNumReverse(int n){ 
    if (n > 0){ 
        cout << n << " "; 
        printNumReverse(n - 1); 
    } 
}

void printNum(int n){ 
    if (n > 0){ 
        printNum(n - 1); 
        cout << n << " "; 
    }
}


int main(){ 
    printNumReverse(10); 
    cout << endl; 
    printNum(10); 
}