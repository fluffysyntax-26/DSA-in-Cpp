#include<iostream> 
#include<vector>

using namespace std; 

int findNumbers(vector<int>& nums) {

    int evenDigits = 0; 
    for(int i=0; i<nums.size(); i++){ 
        int number = nums[i]; 
        short digits = 0; 
        while(number > 0){ 
            number /= 10; 
            digits++; 
        }
        if (digits % 2 == 0){ 
            evenDigits++; 
        }
        }
return evenDigits; 
}

int main(){ 

    vector<int> vec = {555,901,482,1771}; 
    cout << "Numbers with Even Digit in the Array: " << findNumbers(vec); 

}