#include <bits/stdc++.h>

// Function to check if the array is sorted in descending order
bool myFun(int myArr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (myArr[i + 1] > myArr[i]) {
            return false; // Return false if the array is not sorted in descending order
        }
    }
    return true; // Return true if the array is sorted in DESCENDING order
}

int main() {
    int n;
    std::cin >> n;

    int myArr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }

    // Output the result of myFun
    std::cout << myFun(myArr, n) << std::endl;

    return 0;
}