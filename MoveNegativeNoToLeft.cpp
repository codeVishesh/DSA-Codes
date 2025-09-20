#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,-3,2,-1};
    int s =0;
    int e =4;

    while(e>s){

    if(arr[s] <0){
        s++;
    }
    else if(arr[e]>0){
        e--;
    }
    else{
        swap(arr[s], arr[e]);
    }
    }

    for(int i=0;i<5;i++){
        cout<< arr[i]<< " ";
    }

return 0;
}