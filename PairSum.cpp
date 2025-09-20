#include <iostream>
using namespace std;

int main(){
    int arr[6] = {2,4,6,8,9,1};
    int sum = 6;

    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i] + arr[j] == sum){
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
    return 0;
}