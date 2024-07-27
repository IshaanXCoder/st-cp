#include <bits/stdc++.h>

std::vector<int> shiftByTOO(int n, int d, std::vector<int>& myArr) {
    // Create a temporary array to store the shifted result
    std::vector<int> temp(n);
    
    // Shift elements to the right by d positions
    for (int i = 0; i < n; i++) {
        temp[(i + d) % n] = myArr[i];
    }
    
    // Return the shifted array
    return temp;
}

int main() {
    int n, d;
    std::cin >> n >> d;
    
    // Create a vector to hold the input array
    std::vector<int> myArr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }
    
    // Call the function to shift the array
    std::vector<int> newArr = shiftByTOO(n, d, myArr);
    
    // Output the shifted array
    for (int z = 0; z < n; z++) {
        std::cout << newArr[z] << " ";
    }
    
    return 0;
}