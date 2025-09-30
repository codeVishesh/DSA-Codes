#include <iostream>
using namespace std;

void reverse(char ch[],int n){
    int i =0;
    int j= n-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}

int main(){
    char ch[] = "gupta";
    int n=5;
    reverse(ch,n);

    for(int i=0;i<n;i++){
        cout << ch[i] << " ";
    }
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// void reverse(string& str) {
//     int i = 0;
//     int j = str.length() - 1;

//     while (i <= j) {
//         swap(str[i], str[j]);
//         i++;
//         j--;
//     }
// }

// int main() {
//     string str = "gupta";
//     reverse(str);

//     for (int i = 0; i < str.length(); i++) {
//         cout << str[i] << " ";
//     }
//     return 0;
// }
