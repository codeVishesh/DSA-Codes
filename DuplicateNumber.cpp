#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,3,3,4,2};

    while(arr[0] != arr[arr[0]]){ //arr[arr[0]] => index (element ke index number par swap ar rahe h)
        swap(arr[0], arr[arr[0]]);
    }
    cout << arr[0] << endl;

return 0;
}