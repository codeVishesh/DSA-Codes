#include <iostream>
using namespace std;

    bool checkequal(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])return 0;
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {
        int count1[26]={0};
        for(size_t i=0;i<s1.length();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        size_t i=0;
        size_t window=s1.size();
        int count2[26]={0};
        while(i<window &&i<s2.length()){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkequal(count1,count2))return true;
        while(i<s2.length()){
            char ch=s2[i];
            int index=ch-'a';
            count2[index]++;

            char ch2=s2[i-window];
            index=ch2-'a';
            count2[index]--;
            i++;
            if(checkequal(count1,count2))return 1;
        }
        return 0;
    }

    int main(){
        string s1 = "ab";
        string s2 = "eidbaooo";

        bool ans = checkInclusion(s1,s2);

        cout << ans << endl;
    }