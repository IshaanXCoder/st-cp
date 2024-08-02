#include <iostream>
#include <vector>
#include <unordered_map>

// Function to find two indices in 'nums' such that their values add up to 'target'
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> mpp; // Map to store number and its index

    int n = nums.size(); // Size of the input vector

    for (int i = 0; i < n; i++) {
        int num = nums[i]; // Current number
        int moreNeeded = target - num; // Number needed to reach the target

        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i}; // Return indices if pair is found
        }

        mpp[num] = i; // Store number and its index in the map
    }

    return {-1, -1}; // Return {-1, -1} if no valid pair is found
}

// Main function for testing the twoSum function
int main() {
    std::vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 9; // Example target value

    std::vector<int> result = twoSum(nums, target); // Call the function

    // Output the result
    std::cout << "Indices: [" << result[0] << ", " << result[1] << "]" << std::endl;

    return 0;
}