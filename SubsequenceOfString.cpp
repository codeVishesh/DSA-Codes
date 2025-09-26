#include <iostream>
using namespace std;

void printSubsequenceOfString(string str, string output, int i){
    //base case
    if(i >= str.length()){
        cout << output << endl;
        return;
    }

    //exclude
    printSubsequenceOfString(str,output,i+1);

    //include
    output.push_back(str[i]);
    printSubsequenceOfString(str, output, i+1);

}

int main(){
    string str = "abc";
    string output = "";

    int i = 0;
    printSubsequenceOfString(str, output, i);

    return 0;
}

//do  leetcode- 78 subsets same logic 