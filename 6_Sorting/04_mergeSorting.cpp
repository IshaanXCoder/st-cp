#include <iostream>
#include <vector>

void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


void merge(int arr[], int l, int mid, int r) {

    // Calculate the sizes of the two sub-arrays to be merged
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Create temporary arrays to hold the data
    int a[n1], b[n2];  // temporary arrays
    for (int i = 0; i < n1; i++) {
        a[i] = arr[l + i];  // Copy data to temp array a[]
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];  // Copy data to temp array b[]
    }

    // Initial indexes of the first and second sub-arrays
    int i = 0, j = 0;
    // Initial index of the merged sub-array
    int k = l;

    // Merge the temporary arrays back into arr[l..r]
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k] = a[i];  // If element in a is smaller, place it in the array
            i++;
        } else {
            arr[k] = b[j];  // If element in b is smaller, place it in the array
            j++;
        }
        k++;
    }

    // Copy the remaining elements of a[], if any
    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy the remaining elements of b[], if any
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Calculate the middle point
        int mid = (l + r) / 2;

        // Recursively sort the first and second halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // Merge the sorted halves
        merge(arr, l, mid, r);
    }
}


int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    std::cout << "Sorted array: ";
    printArray(arr, arr_size);

    return 0;
}