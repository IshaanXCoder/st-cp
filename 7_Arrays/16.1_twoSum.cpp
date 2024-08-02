#include <bits/stdc++.h>

int main() {
    int n;
    int target;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::cout << "Enter the target number: ";
    std::cin >> target;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
        
            if (arr[i] + arr[j] == target) {
                std::cout << "YES";
                return 0;
            }
        }
    }

    std::cout << "NO!";
    return 0;
}