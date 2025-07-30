// Name - Advika Bhosle
// PRN - 24070123007
// Batch - EnTC - A1 
// Expt - 7

#include <iostream>
using namespace std;

int main() {
    char arr[5] = {'a', 'b', 'c', 'd', 'e'}; 
    char search;
    
    cout << "Enter a character to search: "; 
    cin >> search;

    bool found = false; 
    for (int i = 0; i < 5; i++) {
        if (search == arr[i]) {
            cout << "Element is found" << endl; 
            found = true;
            break; 
        }
    }

    if (!found) {
        cout << "Element is not found" << endl;
    }

    return 0;  
}

//output
/*
Enter a character to search: d
Element is found


=== Code Execution Successful ===
/*
