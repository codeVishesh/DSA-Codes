#include <iostream>
using namespace std;

bool checkPalindrome(string str, int start, int end){
    while(start<=end){
        if(str[start] != str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

bool CheckPalindromeAfterDeleting1Char(string str){
    int i =0;
    int j= str.length()-1;

    while(i<=j){
        if(str[i] != str[j]){
            return checkPalindrome(str, i+1,j) || checkPalindrome(str, i,j-1);
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string str = "abac";
    bool ans = CheckPalindromeAfterDeleting1Char(str);

    cout << ans << endl;

  return 0;
}
