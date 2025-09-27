#include <iostream>
using namespace std;

int main(){

    int arr[] = {6,3,9,1,5};
    int n = 5;
    int s = 0;
    int e = n-1;

    MergeSort(arr,s,e);

    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }    

}