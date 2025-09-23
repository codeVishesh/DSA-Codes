#include <iostream>
using namespace std;

int peakElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2;

    while(s<e){
        if(arr[mid] < arr[mid+1]){ //agar aapka mid element chota h mid +1 se toh iska matlab wo left me ni hoga kabhi bhi
            s = mid+1; // search in right
        }
        else{
            e = mid; //it means that we are on either peak element or on descending line
            // if we write e = mid-1, then if we are on the peak element,
            // then we might loose it hence e = mid is written
        }
        mid = s+ (e-s)/2;
    }
    return s; // we can return e alse
}

int main(){
    int arr[] = {0,10,5,2};
    int n = 4;
    int ans = peakElement(arr,n);
    cout << "Peak element is at index: " << ans << endl;

    return 0;
}