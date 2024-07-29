#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum number of consecutive 1's in a binary array
int consecutiveOnes(const vector<int>& myArr) {
    int maxi = 0;  // Variable to store the maximum count of consecutive 1's
    int cnt = 0;   // Variable to count consecutive 1's

    // Iterate through the array
    for (int i = 0; i < myArr.size(); i++) {
        if (myArr[i] == 1) {  // If the current element is 1
            cnt++;  // Increment the count of consecutive 1's
            maxi = max(maxi, cnt);  // Update the maximum count if needed
        } else {
            cnt = 0;  // Reset count if the current element is not 1
        }
    }
    return maxi;  // Return the maximum count of consecutive 1's
}

// Example usage
int main() {
    // Example binary array
    vector<int> myArr = {1, 1, 0, 1, 1, 1, 0, 1, 1};

    // Function call and output
    cout << "Maximum consecutive 1's: " << consecutiveOnes(myArr) << endl;

    return 0;
}