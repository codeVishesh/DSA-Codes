#include <iostream>
#include <vector>
using namespace std;


void IntersectionOf2arrays(int arr[], int a, int brr[], int b, vector<int> ans){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(arr[i] == brr[j]){
                ans.push_back(arr[i]);
            }
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int a = 5;
    int brr[] = {2,6,4,8,9};
    int b = 5;

    vector<int> ans;

    IntersectionOf2arrays(arr,a,brr,b,ans);
}