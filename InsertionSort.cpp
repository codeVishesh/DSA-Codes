#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int val = arr[i]; // pick that element
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>val){ // comparing element
                arr[j+1] = arr[j]; // shifting operation
            }
            else{
                break;
            }
        }
        arr[j+1] = val; // copy
    }
}

int main(){
    int arr[] = {8,3,4,5,1,7};
    int n =6;

    InsertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}