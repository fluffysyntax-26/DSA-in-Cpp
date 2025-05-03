#include <iostream> 

using namespace std; 

int alternateDigitSum(int n) {
    int digitSum = 0; 
    bool evenDigit = true; 

    while(n > 0){ 
        int remainder = n % 10; 
        if(evenDigit){ 
            digitSum = digitSum - remainder; 
        } else{
            digitSum += remainder; 
        }
        n /= 10; 
        evenDigit = !evenDigit; 
    }
    return digitSum; 
}

int main(){ 
   cout << alternateDigitSum(10); 
}