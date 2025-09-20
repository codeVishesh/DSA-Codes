#include <iostream>
using namespace std;
//leet code 75 - sort colors 

int main(){

    int arr[5] = {2,0,2,1,1};
    int s =0;
    int m =0;
    int e = 4;

    while(m<e){
        if(arr[m]==0){
            swap(arr[s], arr[m]);
            s++;
            m++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m], arr[e]);
            e--;
        }
    }

    for(int i=0;i<5;i++){
        cout<< arr[i] << " ";
    }

return 0;
}