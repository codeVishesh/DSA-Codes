#include <iostream>
using namespace std;
// also known as Dutch National flag Problem (two pointer approach)

int main(){

    int arr[6] = {1,1,0,1,0,1};
    int s =0;
    int e = 5;

    for(int i=0;i<6;i++){
        if(arr[i] ==0){
            swap(arr[s], arr[i]);
            s++;
            // i++;
        }
        else{
            swap(arr[s], arr[e]);
            e--;
        }
    }
    for(int i=0;i<6;i++){
        cout << arr[i] << " ";
    }

return 0;
}