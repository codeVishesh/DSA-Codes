#include <iostream>
using namespace std;

string removeAllOccurencesInSubstring(string str, string part){
    size_t pos = str.find(part);
    while(pos != string :: npos){
        str.erase(pos,part.length());
        pos = str.find(part);
    }
    return str;
}

int main() {
    string str = "daabcbaabcbc";
    string part = "abc";
    string ans = removeAllOccurencesInSubstring(str,part);

    cout << ans << endl;

  return 0;
}
