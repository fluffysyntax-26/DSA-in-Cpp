#include <iostream> 

using namespace std; 

int main(){ 
    
    int scores[] = {5, 15, 22, -1, -15, 45, 15};
    int scoresLength = sizeof(scores) / sizeof(scores[0]); 

    int maxElement = scores[0]; 
    int minElement = scores[0]; 

    for(int i=0; i<scoresLength; i++){ 
        if (scores[i] > maxElement) {
            maxElement = scores[i]; 
        }

        if (scores[i] < minElement){
            minElement = scores[i]; 
        }
    }

    cout << endl << "Max Element: " << maxElement; 
    cout << endl << "Min Element: " << minElement; 
}

// work on it to return the indices of the samllest and the largest element
