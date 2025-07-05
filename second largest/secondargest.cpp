//brute force approach
#include <iostream>
#include <algorithm>// has sort()
using namespace std;

int findSecondLargest(int arr[], int n) {
    sort(arr, arr + n); // Sort in ascending order

    // Traverse from end to find the first element smaller than the largest
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != arr[n - 1]) {
            return arr[i];
        }
    }
    return -1; // All elements are same
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Second Largest: " << findSecondLargest(arr, n) << endl;
    return 0;
}
