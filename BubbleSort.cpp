#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=1;j<n-i;j++){
            if(arr[j-1] > arr[j]){
                swapped = true;
                swap(arr[j-1],arr[j]);
            }
        }
        if(!swapped){
            break;
        }
    }
}

int main(){
    int arr[] = {8,3,4,5,1,7};
    int n =6;

    BubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}