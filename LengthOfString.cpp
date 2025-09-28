#include <iostream>
using namespace std;

int GetLen(char ch[]){
    int len =0;
    int i=0;
    while(ch[i] != '\0'){
        len++;
        i++;
    }
    return len;
}

int main(){
    char ch[] = "gupta";
    int ans = GetLen(ch);
    cout << ans << endl;
}