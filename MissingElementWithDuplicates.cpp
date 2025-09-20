#include <iostream>
using namespace std;
// sort and swap technique

int main(){

    int arr[5] = {1,3,3,3,5};
    int n =5;
    int i=0;
    while(i<n){
        int index = arr[i] -1;
        if(arr[i]!=arr[index]){
            swap(arr[i],arr[index]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout << i+1 << " ";
        }
    }
    cout << endl;

return 0;
}