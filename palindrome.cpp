// Name - Advika Bhosle
// PRN - 24070123007
// Batch - EnTC - A1 

#include <iostream>
using namespace std;

int main() {
    string word1, word2;

    cout << "Enter first word: ";
    cin >> word1;

    cout << "Enter second word: ";
    cin >> word2;

    cout << word1 << " is ";
    for (int i = 0; i < word1.length() / 2; i++) {
        if (word1[i] != word1[word1.length() - 1 - i]) {
            cout << "not ";
            break;
        }
        if (i == word1.length() / 2 - 1) {
            cout << "";
        }
    }
    cout << "a palindrome." << endl;

    cout << word2 << " is ";
    for (int i = 0; i < word2.length() / 2; i++) {
        if (word2[i] != word2[word2.length() - 1 - i]) {
            cout << "not ";
            break;
        }
        if (i == word2.length() / 2 - 1) {
            cout << "";
        }
    }
    cout << "a palindrome." << endl;

    return 0;
}

//output
/*
Enter first word: madam
Enter second word: rhythm
madam is a palindrome.
rhythm is not a palindrome.


=== Code Execution Successful ===
/*
