#include <bits/stdc++.h>  // Includes all standard headers
// Do not use namespace std

int main()
{
    int n;
    int x;
    
    // Input the value of x
    std::cout << "Enter x : ";
    std::cin >> x;

    // Input the number of elements
    std::cout << "Enter the number of elements : ";
    std::cin >> n;

    // Declare a vector to store n elements
    std::vector<int> myArr(n);
    
    // Input the elements of the array
    std::cout << "Enter the elements : ";
    for (int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }
    
    // Initialize first and last to -1
    int first = -1;
    int last = -1;

    // Iterate through the array to find first and last occurrence of x
    for (int i = 0; i < n; i++) {
        if (myArr[i] == x) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    
    // Store the values of first and last in a pair
    std::pair<int, int> p = {first, last};

    // Output the values of the pair
    std::cout << "First occurrence: " << p.first << ", Last occurrence: " << p.second << std::endl;

    return 0;
}