#include <iostream>
#include <vector>

class Solution {
public:
    // Function to search for the target or find the insertion position
    int searchInsert(std::vector<int>& nums, int target) {
        // Initialize low and high pointers for binary search
        int low = 0;
        int high = nums.size() - 1;
        
        // Perform binary search
        while (low <= high) {
            // Calculate the middle index to avoid overflow
            int mid = low + (high - low) / 2;
            
            // If the target is found at mid, return the index
            if (nums[mid] == target) {
                return mid;
            }
            // If the target is greater than the middle element, search the right half
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            // If the target is smaller than the middle element, search the left half
            else {
                high = mid - 1;
            }
        }
        
        // If the target is not found, return the position where it should be inserted
        return low;
    }
};

int main() {
    // Initialize a sorted array of distinct integers
    std::vector<int> nums = {1, 3, 5, 6};

    // Define the target value to search for
    int target = 5;
    
    // Create an instance of the Solution class
    Solution solution;

    // Call the searchInsert function and store the result
    int result = solution.searchInsert(nums, target);

    // Print the result (the index of the target or the insertion point)
    std::cout << "The target should be inserted at index: " << result << std::endl;

    return 0;
}