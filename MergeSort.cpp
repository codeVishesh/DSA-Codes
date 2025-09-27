#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    //find min
    int mid = s + (e-s)/2;

    //length of left and right subarray
    int len1 = mid - s+1;
    int len2 = e - mid;

    //dynamic allocation of 2 arrays
    int *left = new int[len1];
    int *right = new int[len2];

    //copy the left part into left array
    int k = s;
    for(int i=0;i<len1;i++){
        left[i] = arr[k++];
    }

    //copy the right part into right array
    k = mid+1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k++];
    }

    //intializing the left , right and main array indexes
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrIndex = s;


    //loop untill any of the array finihes
    while(leftIndex < len1 && rightIndex < len2){
        //left array has samller value
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrIndex++] = left[leftIndex++];
        }
         //right array has samller value
        else{
            arr[mainArrIndex++] = right[rightIndex++]; 
        }
    }

    //copy left array values if right array has finished
    while(leftIndex < len1){
        arr[mainArrIndex++] = left[leftIndex++];
    }

    //copy right array values if left array has finished
    while(rightIndex < len2){
        arr[mainArrIndex++] = right[rightIndex++];
    }

    // Free allocated memory
    delete[] left;
    delete[] right;

}


void MergeSort(int arr[], int s, int e){
    //s==e single element and s> e is invalid
    if(s>=e){
        return;
    }

    // find mid
    int mid = s+(e-s)/2;

    //recursion call for left array
    MergeSort(arr,s,mid);

    //recursion call for right array
    MergeSort(arr,mid+1,e);

    //Merge 2 sorted arrays
    merge(arr,s,e);
}



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