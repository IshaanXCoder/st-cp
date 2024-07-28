#include <bits/stdc++.h>

// Function to move all zeros in the array to the left
void moveZerosToLeft(int *arr, int n) {
    std::vector<int> temp;

    // Traverse the array and push non-zero elements to temp vector
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    // Place non-zero elements back to the array starting from the right
    for (int i = 0; i < temp.size(); i++) {
        arr[n - temp.size() + i] = temp[i];
    }

    // Fill the remaining positions on the left with zeros
    for (int i = 0; i < n - temp.size(); i++) {
        arr[i] = 0;
    }
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int *arr = new int[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    moveZerosToLeft(arr, n);

    std::cout << "Array after moving zeros to the left: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}