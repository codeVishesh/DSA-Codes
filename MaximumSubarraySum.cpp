
#include <iostream>
#include <limits.h> // For LONG_MIN
using namespace std;

// Kadane's Algorithm to find the maximum subarray sum
long long maxSubarraySum(int arr[], int n, int& start, int& end, int& s) {
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    start = 0; // Initialize start and end
    end = 0;
    s = 0; // Temporary start index

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            start = s;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            s = i + 1; // Update the start index for the next potential subarray
        }
    }

    return maxi;
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start, end, s;
    long long maxSum = maxSubarraySum(arr, n, start, end, s);

    cout << "The maximum subarray sum is: " << maxSum << endl;

    // Print the subarray
    cout << "The maximum subarray is: ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
