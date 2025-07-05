#include <iostream>
#include <climits>
using namespace std;

int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN;

    // First pass: find the largest
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    int secondLargest = INT_MIN;

    // Second pass: find max element not equal to largest
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest: " << findSecondLargest(arr, n) << endl;
    return 0;
}
//TC O(n) two passes 