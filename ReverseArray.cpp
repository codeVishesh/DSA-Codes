#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
 while(start <= end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

int main(){
  int arr[6] = {1,2,3,4,5,6};
  int size = 6;

  reverseArray(arr, 0, size-1);

  for(int i=0; i<size; i++){
    cout << arr[i]<<" ";
  }
}