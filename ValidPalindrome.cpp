// #include<string>
// #include<iostream>
// #include<vector>
// using namespace std;

//     bool valid(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         }
        
//         return 0;
//     }
    
//     char toLowerCase(char ch) {
//     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
//     bool checkPalindrome(string a) {
//     int s = 0;
//     int e = a.length()-1;

//     while(s<=e) {
//         if(a[s] != a[e])
//         {
//             return 0;       
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }

//     bool isPalindrome(string s) {
        
//         //faltu character hatado
//         string temp = "";
        
//         for(size_t j=0; j<s.length(); j++) {   
//             if(valid(s[j])) {
//                 temp.push_back(s[j]);
//             }
//         }
        
//         //lowercase me kardo
//         for(size_t j=0; j<temp.length(); j++) { 
//             temp[j] = toLowerCase(temp[j]);
//         }
        
//         //check palindrome
//         return checkPalindrome(temp);
        
//     }

//     int main(){
//         string s = "sOs sOs sos";
//         bool ans = isPalindrome(s);

//         cout << ans << endl;
//     }


#include <iostream>
#include <vector>
#include <string> // For std::to_string
#include <cctype> // For std::isdigit
#include <cstdlib> // For std::atoi
#include <stdexcept> // For std::invalid_argument
using namespace std;

int main() {
    vector<int> ans;
    int num;

    // Taking input until EOF or invalid input (e.g., a non-integer)
    while (cin >> num) { 
        ans.push_back(num);
    }

    // Output the collected numbers
    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
