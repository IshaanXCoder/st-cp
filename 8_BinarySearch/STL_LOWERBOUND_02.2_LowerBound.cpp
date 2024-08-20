#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = {10, 20, 30, 40, 50};

    int x = 35;

    // Finding the lower bound as an index
    int index = std::lower_bound(arr.begin(), arr.end(), x) - arr.begin();

    if (index < arr.size()) {
        std::cout << "Lower bound of " << x << " is at index " << index 
                  << " with value " << arr[index] << '\n';
    } else {
        std::cout << x << " is greater than all elements in the array\n";
    }

    return 0;
}