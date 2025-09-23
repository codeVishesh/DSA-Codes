#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int target){
    int s = 0;
    int e =n -1;
    int ans = -1;

    //int mid = (s + e) / 2;
    int mid = s+(e-s)/2;

    while(s<=e){
        int element = arr[mid];

        if(element == target){
            ans = mid; // store the answer
            e = mid-1; // search in left
        }
        else if(target < element){
            //search in left
            e = mid -1;
        }
        else{
            //search in right
            s = mid +1;
        }

        mid = (s+e)/2; // update the value of mid
    }
    return ans;
}

int main(){
    int arr[7] = {1,3,5,11,11,11,14};
    int n = 7;
    int target = 11;

    int ans = FirstOccurence(arr,n,target);

    cout << "First occurence at the index of: " << ans << endl;

    return 0;
}