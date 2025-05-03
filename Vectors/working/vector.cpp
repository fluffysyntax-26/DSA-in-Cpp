#include <iostream> 
#include <vector> 

using namespace std; 

int main(){ 

    // vector of type int 
    vector <int> vec = {1,2,3,4,5};
    cout << vec[3] <<endl; 

    // vector of type char 
    vector <char> characters =  {'a', 'b', 'c', 'd', 'e', 'f'}; 
    for (char character : characters){ 
        cout << character << " "; 
    }

    cout << endl; 
    
    // specify the size and fill with default values 
    vector <int> ones(5,1); 
    for(int one : ones){ 
        cout << one << " "; 
    }

}