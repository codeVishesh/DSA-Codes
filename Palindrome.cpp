#include <iostream>
#include <cstring> 
using namespace std;

bool palindrome(char ch[]){
    int len = strlen(ch); 
    int s=0;
    int e= len-1;

    while(s<=e){
        if(ch[s] != ch[e]){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}

int main(){
    char ch[] = "soso";
    int ans = palindrome(ch);
    cout << ans << endl;

    return 0;
}
