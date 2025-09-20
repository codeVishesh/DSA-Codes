#include <iostream>
using namespace std;

int main(){

    int arr[][3] = {{1,2,3},
                    {4,100,6},
                    {7,8,9}};

    int maxi = INT_MIN;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] > maxi){
                maxi = arr[i][j];
            }
        }
    }

    cout << maxi << endl;

return 0;
}