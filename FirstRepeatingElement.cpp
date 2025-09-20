#include <iostream>
#include <unordered_map>
using namespace std;

int FirstRepeatingElement(int arr[],int n, unordered_map<int, int> hash){
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(hash[arr[i]] >1){
            return i+1;
        }
    }
    return 0;
}

int main(){

    int arr[5] = {5,1,3,3,6};
    int n = 5;
    unordered_map<int, int> hash;

    cout << FirstRepeatingElement(arr,n,hash);
    
}
