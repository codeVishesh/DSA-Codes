#include <iostream>
using namespace std;

int FindMissingElement(int arr[],int n){
    int s =0;
    int e = n-1;
    int mid = s+ (e-s)/2;

    while((e-s)>1){
        if(arr[s]-s != arr[mid]-mid){
            e = mid;
        }
        else if(arr[e]-e != arr[mid]-mid){
            s = mid;
        }
        mid = s+ (e-s)/2;
    }
    return arr[s] +1;
}

int main(){
    int arr[7] = {1,3,4,5,6};
    int n = 5;

    int ans = FindMissingElement(arr,n);
    cout << "The missing Element is: " << ans << endl;

    return 0;
}