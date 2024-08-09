#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    // Read vector elements
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
        std::cin >> arr[i];
    }

    int num0 = 0, num1 = 0, num2 = 0;

    // Count occurrences of 0, 1, 2
    for(int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            num0++;
        } else if (arr[i] == 1) {
            num1++;
        } else if (arr[i] == 2) {
            num2++;
        }
    }

    // Clear the vector and then insert 0's, 1's, and 2's in sorted order
    arr.clear();

    // Insert 0's
    for(int i = 0; i < num0; i++) {
        arr.push_back(0);
    }

    // Insert 1's
    for(int i = 0; i < num1; i++) {
        arr.push_back(1);
    }

    // Insert 2's
    for(int i = 0; i < num2; i++) {
        arr.push_back(2);
    }

    // Output the sorted vector
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}