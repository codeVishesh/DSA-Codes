#include <iostream>
using namespace std;

int main(){
    int arr[4] = {10,20,30,40};
    int sum = 60;

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            for(int k=j+1;k<4;k++){
                if(arr[i] + arr[j] +arr[k] == sum){
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k]<<")" << endl;
                }
            }
        }
    }
    return 0;
}