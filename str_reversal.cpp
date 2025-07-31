// Name - Advika Bhosle
// PRN - 24070123007
// Batch - EnTC - A1

#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a word: ";
    cin >> str;

    int length = str.length();

    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    cout << "\nNumber of letters: " << length << endl;

    return 0;
}

//output
/*
Enter a word: pneumonoultramicroscopicsilicovolcanoconiosis
Reversed string: sisoinoconaclovociliscipocsorcimartluonomuenp
Number of letters: 45


=== Code Execution Successful ===
/*
