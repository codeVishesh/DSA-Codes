#include <iostream>
using namespace std;

//backtracking question

void PermutationOfString(string &str, int i) {
    // Base case: if index is at the end of the string
    if (i >= str.length()) {
        cout << str << endl;
        return;
    }
    
    // Generate permutations by swapping each character with the current index
    for (int j = i; j < str.length(); j++) {
        // Swap characters at index i and j
        swap(str[i], str[j]);

        // Recursively generate permutations for the next index
        PermutationOfString(str, i + 1);

        // Backtrack: Swap the characters back to restore the original string
        swap(str[i], str[j]);
    }
}

int main() {
    string str = "abc";
    int i = 0;

    PermutationOfString(str, i);

    return 0;
}
