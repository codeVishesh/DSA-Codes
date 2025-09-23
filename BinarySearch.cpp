#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target){
    int s = 0;
    int e =n -1;

    //int mid = (s + e) / 2;
    int mid = s+(e-s)/2;

    while(s<=e){
        int element = arr[mid];

        if(element == target){
            return mid;
        }
        else if(target < element){
            //search in left
            e = mid -1;
        }
        else{
            //search in right
            s = mid +1;
        }

        mid = (s+e)/2;
    }
    //element not found
    return -1;
}

int main(){
    int arr[7] = {1,3,5,7,9,11,14};
    int n = 7;
    int target = 11;

    int indexOfTarget = BinarySearch(arr,n,target);

    if(indexOfTarget == -1){
        cout << "target not found " << endl;
    }
    else{
        cout << "target found at " << indexOfTarget << endl;
    }
    return 0;
}