#include<bits/stdc++.h>

int majorityElement(vector<int> v) {
    // Step 1: Declare a map to keep track of the frequency of each element
    map<int, int> mpp;
    
    // Step 2: Loop through the array to populate the map with the frequency of each element
    for (int i = 0; i < v.size(); i++) {
        mpp[v[i]]++;  // Increment the frequency count for the element v[i]
    }

    // Step 3: Loop through the map to find the element with a frequency greater than n/2
    for (auto it: mpp) {
        // Check if the frequency of the current element is greater than half the size of the array
        if (it.second > (v.size() / 2)) {
            return it.first;  // Return the element as it is the majority element
        }
    }

    // Step 4: If no majority element is found, return -1
    return -1;
}