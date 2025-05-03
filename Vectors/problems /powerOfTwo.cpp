#include <iostream> 

using namespace std;

bool isPowerOfTwo(int n) {
    int counter = 0; 
    while(counter < 31){ 
        cout << "2 power " << counter << " = " << pow(2, counter) << endl;  
        if(pow(2, counter) == n){
           return true; 
           break; 
        }
        counter++; 
    }
    return false; 
}
int main(){ 
    int n; 
    cout << "Enter a number to check if it's power of two: "; 
    cin >> n; 
    cout << isPowerOfTwo(n); 
}