#include <iostream>
using namespace std;

int main(){

    int arr[][3] = {{1,2,3},
                    {4,5,6},
                    {7,8,9}};

    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){   //remember j<i
            swap(arr[i][j], arr[j][i]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}

// The condition j < i in the inner loop is used to ensure that each pair of elements is swapped
// only once during the matrix transposition process, without redundant swaps