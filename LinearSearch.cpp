// #include <iostream>
// using namespace std;

// bool isFound(int arr[], int n, int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[] = {2,5,7,8,10,3};
//     int n = 6;
//     int key = 2;

//     cout << isFound(arr,n,key);
// }

#include <iostream>
using namespace std;

void isFound(int arr[], int n, int key){
    // bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout << i << endl;
            // found = true;
        }
    }
    // if(!found){
    //     cout << "not found " << endl;
    // }
}

int main(){
    int arr[] = {2,5,7,8,10,3};
    int n = 6;
    int key = 8;

    isFound(arr,n,key);
}