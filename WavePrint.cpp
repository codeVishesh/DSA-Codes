#include <iostream>
#include <vector>
using namespace std;

void WavePrint(int arr[3][3], int rows, int cols,vector<int> &ans){
    for(int j=0;j<3;j++){
        if(j&1){
            for(int i = rows-1;i>=0;i--){
                ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int i = 0;i<rows;i++){
                ans.push_back(arr[i][j]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
    }
}

int main(){
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = 3;
    int cols = 3;

    vector<int> ans;

    WavePrint(arr,rows,cols, ans);
}