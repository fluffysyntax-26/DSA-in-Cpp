#include <iostream> 
#include <vector> 

using namespace std; 

vector<int> concatenate(vector<int> &nums){ 
    int n = nums.size(); 
    vector<int> duplicate(2 * n); 
    for(int i=0; i < n; i++){ 
       duplicate[i] = nums[i];
       duplicate[i + n] = nums[i];  
    }
    return duplicate; 
    }


int main(){ 
    vector<int> vec = {10,20,30}; 

    cout << concatenate(vec);
}