#include<iostream> 
#include<vector>

using namespace std; 

void thirdMax(vector<int> &nums){ 
        int firstMax = 0; 
        int secondMax = 0; 
        int thirdMax = 0; 

        for(int i=0; i<nums.size(); i++){ 
            if(nums[i] > firstMax){ 
                firstMax = nums[i]; 
            } 
            if(nums[i] > secondMax && secondMax < firstMax){ 
                secondMax = nums[i];
            }
            if(nums[i] > thirdMax && nums[i] < secondMax){ 
                thirdMax = nums[i];
            }
        }
    cout << firstMax << " "<< secondMax << " " << thirdMax; 
}

int main(){ 
    vector<int> vec = {10,20,40,50,30,60,90}; 
    
    thirdMax(vec); 
}