#include <iostream>
#include <vector>
using namespace std;


void UnionArrays(int arr[], int a, int brr[], int b, vector<int> ans){
    for(int i=0;i<a;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<b;i++){
        ans.push_back(brr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] <<  " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int a = 5;
    int brr[] = {6,7,8,9,0};
    int b = 5;
    vector<int> ans;

    UnionArrays(arr,a,brr,b,ans);
}