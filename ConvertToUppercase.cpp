#include <iostream>
#include <cstring> 
using namespace std;

void ConvertToUppercase(char ch[]){
    for(int i=0;i<7;i++){
        if(ch[i]>='a' && ch[i]<='z'){
            ch[i] = ch[i] - 'a' + 'A';
        }
    }
}

int main(){
    char ch[] = "racecar";
    ConvertToUppercase(ch);

    for(int i=0;i<7;i++){
        cout << ch[i] << " ";
    }

    return 0;
}



//CONVERT TO LOWERCASE

// #include <iostream>
// #include <cstring> 
// using namespace std;

// void ConvertToUppercase(char ch[]){
//     for(int i=0;i<7;i++){
//         if(ch[i]>='A' && ch[i]<='Z'){
//             ch[i] = ch[i] - 'A' + 'a';
//         }
//     }
// }

// int main(){
//     char ch[] = "RACECAR";
//     ConvertToUppercase(ch);

//     for(int i=0;i<7;i++){
//         cout << ch[i] << " ";
//     }

//     return 0;
// }
