#include <iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr) {
  int s = 0;
  int e = arr.size() - 1;
  int mid = s + (e-s)/2;

  while(s <= e) {
    if(s == e) {
      //single element
      return s;
    }
    if(mid <= e && arr[mid] > arr[mid+1])
      return mid;
    if(mid-1 >= s && arr[mid-1] > arr[mid])
      return mid-1;

    if(arr[s] > arr[mid]) 
      e = mid - 1;
    else
      s = mid + 1;

    mid = s + (e-s)/2;

  }
  return -1;
}

//code is perfect and is running perfectly on the onliune compliler
int main() {
  // vector<int> arr{1,2,3,4};
  // int ans = findPivot(arr);
  // if (ans == -1) {
  //   cout << "Kuch gadbad hai " << endl;
  // } else {
  //   cout << "Ans is at index " << ans << endl;
  //   cout << "Value of ans is " << arr[ans] << endl;
  // }

  return 0;
}

