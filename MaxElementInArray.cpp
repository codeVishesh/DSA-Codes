#include <iostream>
using namespace std;

int FindMax(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
    int arr[] = {12,45,7,1000,4};
    int n = 5;

    cout << FindMax(arr,n) << endl;;
}