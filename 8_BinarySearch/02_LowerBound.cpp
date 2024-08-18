#include<bits/stdc++.h>

// Lower bound --> smallest index such that the number at that index is greater than or equal to x(input)
// example if arr=[3,5,9,15,19] and x=8; so the output is 2 as the suitable calue is 9 which is at index 2.




int main() {
    int n;
    int x;
    
    std::cout << "Enter x : ";
    std::cin >> x;

    std::cout << "Enter the number of elements : ";
    std::cin >> n;
    
    std::vector<int> myArr(n);
    std::cout << "Enter the elements : ";
    for(int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }



    // Finding the lower bound
    int lb = -1; // To handle if no suitable value is found
    for(int i = 0; i < n; i++) {
        if(myArr[i] >= x) {
            lb = i;
            break;
        }
    }

    if(lb != -1) {
        std::cout << "LB is " << lb << std::endl;
    } else {
        std::cout << "No suitable value found." << std::endl;
    }

    return 0;
}