#include <iostream>
#include <cstring>
using namespace std;

void ReplaceAllSpaces(char ch[]){
    int len = std::strlen(ch);

    for(int i = 0; i < len; i++){
        if(ch[i] == ' '){ 
            ch[i] = '@'; 
        }
    }
}

int main(){
    char ch[] = "My name is vishesh Gupta";
    ReplaceAllSpaces(ch);

    int len = std::strlen(ch); 
    for(int i = 0; i < len; i++){
        cout << ch[i] << "";
    }
    cout << endl;
    return 0;
}
