#include<iostream> 
#include<vector> 

using namespace std; 

int findUniqueSingle(vector <int> vec){
    int singleElement = 0; 
    for (int ele : vec){ 
        singleElement = ele ^ singleElement; 
}
return singleElement; 
}

int main(){ 
    
    vector <int> numbers = {4,4,5,6,3,5,6,7,8,8,7}; 
    cout << findUniqueSingle(numbers); 
}