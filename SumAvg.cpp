// Name - Advika Bhosle
// PRN - 24070123007
// Batch - EnTC - A1 
// Expt - 7

#include <iostream>
using namespace std;

int main() {
    
    int arr[6] = {100, 200, 300, 400, 500, 600};
    int sum = 0;
    int n = 6;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int average = sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

//output
/*
Sum = 2100
Average = 350


=== Code Execution Successful ===
/*
