#include <iostream> 

using namespace std; 

void twoSum(int *nums, int target) {
    int sum = 0; 
    int start = 0; 
    int end = (sizeof(nums)/sizeof(nums[0])) - 1; 

    int index1 = 0; 
    int index2 = 0; 

    while(start < end){ 
        sum = nums[start] + nums[end]; 
        if (sum == target){ 
            index1 = nums[start]; 
            index2 = nums[end]; 
            break; 
        }
        start++; 
        end--; 
    }

    int newArr[2]; 
    newArr[0] = index1; 
    newArr[1] = index2; 

    for(int ele : newArr){ 
        cout << ele << " "; 
    }
}

int main(){ 
        
    int arr[] = {2,7,11,15}; 
    int targetSum = 9; 
    
    twoSum(arr, targetSum); 

}