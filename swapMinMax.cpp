#include <iostream>
using namespace std;

// Function to swap smallest and largest elements in an array
void swapMinMax(int arr[], int n) {
    int minIndex = 0, maxIndex = 0;

    // Find indices of smallest and largest
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }

    // Swap using built-in swap function
    swap(arr[minIndex], arr[maxIndex]);
}

int main() {
    int arr[] = {5, 6, 7, 3, 9};
    int n = 5;

    // Call the function
    swapMinMax(arr, n);

    // Print updated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}