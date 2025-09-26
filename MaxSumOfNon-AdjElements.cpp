#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void solve(const vector<int>& arr, int sum, int& maxi, size_t i) {
    if (i >= arr.size()) {
        //maxi update
        maxi = max(maxi, sum);
        return;
    }

    // Include the current element
    solve(arr, sum + arr[i], maxi, i + 2);

    // Exclude the current element
    solve(arr, sum, maxi, i + 1);
}

int main() {
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(9);

    int sum = 0;
    int maxi = INT_MIN;
    size_t i = 0;

    solve(arr, sum, maxi, i);

    cout << maxi << endl;
    return 0;
}


