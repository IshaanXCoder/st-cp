#include <iostream>
#include <vector>
#include <algorithm>

int findCeil(std::vector<int>& arr, int target) {
    // Initialize low and high pointers for binary search
    int low = 0, high = arr.size() - 1;
    int ceilValue = -1;  // Initialize ceil as -1 (when ceil doesn't exist)

    // Perform binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow

        // If the mid element is equal to the target, that is the ceil
        if (arr[mid] == target) {
            return arr[mid];  // Ceil is the target itself
        }

        // If mid element is greater than the target, it could be a potential ceil
        if (arr[mid] > target) {
            ceilValue = arr[mid];  // Update ceil to current mid
            high = mid - 1;  // Move to left half to check for a smaller ceil
        }
        // If mid element is less than target, move to the right half
        else {
            low = mid + 1;
        }
    }

    // Return the ceil value, -1 if no ceil is found
    return ceilValue;
}

int main() {
    // Example sorted array
    std::vector<int> arr = {1, 2, 8, 10, 10, 12, 19};

    // Target to find the ceil for
    int target = 5;

    // Call the findCeil function and output the result
    std::cout << "Ceil of " << target << " is: " << findCeil(arr, target) << std::endl;

    return 0;
}