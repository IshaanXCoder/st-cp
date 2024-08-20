#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // A sorted array (required for upper_bound to work correctly)
    std::vector<int> arr = {10, 20, 30, 40, 50};

    // Value for which we want to find the upper bound
    int x = 30;

    // Find the first element that is greater than x using upper_bound
    int index = std::upper_bound(arr.begin(), arr.end(), x) - arr.begin();

    // Check if the upper bound is within the range of the array
    if (index < arr.size()) {
        // Output the index and value of the upper bound
        std::cout << "Upper bound of " << x << " is at index " << index 
                  << " with value " << arr[index] << '\n';
    } else {
        // If all elements are less than or equal to x
        std::cout << x << " is greater than or equal to all elements in the array\n";
    }

    return 0;
}