#include<iostream> 
#include<vector> 

using namespace std; 

bool increasingTriplet(vector<int>& nums) {
    for(int i = 0; i<nums.size()-2; i++){ 
        if(nums[i] < nums[i+1] and nums[i+1] < nums[i+2]){ 
            cout << nums[i] << " " << nums[i+1] << " " << nums[i+2]; 
            return true; 
        }
    }
    return false; 
}

int main(){ 
    vector<int> vec = {20,100,10,12,5,13}; 
    cout << increasingTriplet(vec); 
}