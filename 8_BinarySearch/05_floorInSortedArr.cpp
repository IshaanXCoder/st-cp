#include <iostream>
#include <vector>
#include <algorithm>

int findFloor(std::vector<int>& arr, int target) {
    // Initialize low and high pointers for binary search
    int low = 0, high = arr.size() - 1;
    int floorValue = -1;  // Initialize floor as -1 (when floor doesn't exist)

    // Perform binary search
    while (low <= high) {
        int mid = low + (high - low) / 2;  // Calculate mid to avoid overflow

        // If the mid element is equal to target, that is the floor
        if (arr[mid] == target) {
            return arr[mid];  // Floor is the target itself
        }

        // If the mid element is less than target, it could be a potential floor
        if (arr[mid] < target) {
            floorValue = arr[mid];  // Update floor to current mid
            low = mid + 1;  // Move to right half to check for a closer floor
        }
        // If mid element is greater than target, move to the left half
        else {
            high = mid - 1;
        }
    }

    // Return the floor value, -1 if no floor is found
    return floorValue;
}

int main() {
    // Example sorted array
    std::vector<int> arr = {1, 2, 8, 10, 10, 12, 19};

    // Target to find the floor for
    int target = 5;

    // Call the findFloor function and output the result
    std::cout << "Floor of " << target << " is: " << findFloor(arr, target) << std::endl;

    return 0;
}