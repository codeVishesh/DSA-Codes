#include <iostream>
using namespace std;

int binarySearchIn2DMatrix(int arr[3][3], int row, int col, int target) {
    int s = 0;
    int e = row * col - 1;
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;
        int element = arr[rowIndex][colIndex];

        if (element == target) {
            return true;
        } else if (element < target) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return false;
}

int main(){
    int arr[3][3] ={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int row = 3;
    int col = 3;
    int target = 100;

    int ans = binarySearchIn2DMatrix(arr,row,col,target);
    cout << "element Found:" << ans << endl;
    return 0;
}