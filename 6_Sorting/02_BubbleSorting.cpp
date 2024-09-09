#include <iostream>

// Bubble sort is a simple sorting algorithm that repeatedly steps through the list, 
// compares adjacent elements, and swaps them if they are in the wrong order. 
// This process is repeated until the list is sorted.

// Example List: [5, 3, 8, 4, 2]

// Steps:

// 1. First Pass:
// • Compare 5 and 3. Since 5 > 3, swap them. The list becomes [3, 5, 8, 4, 2].
// • Compare 5 and 8. No swap needed.
// • Compare 8 and 4. Since 8 > 4, swap them. The list becomes [3, 5, 4, 8, 2].
// • Compare 8 and 2. Since 8 > 2, swap them. The list becomes [3, 5, 4, 2, 8].
// After the first pass, the largest element (8) is in its correct position.

// 2. Second Pass:
// • Compare 3 and 5. No swap needed.
// • Compare 5 and 4. Since 5 > 4, swap them. The list becomes [3, 4, 5, 2, 8].
// • Compare 5 and 2. Since 5 > 2, swap them. The list becomes [3, 4, 2, 5, 8].

// AND SO ON aise chalta rahgea!!

void myFun(int myArr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (myArr[j] > myArr[j + 1]) {
                // swapping the two!
                int temp = myArr[j];
                myArr[j] = myArr[j + 1];
                myArr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    std::cin >> n; // Read the size of the array

    int myArr[n]; // Declare the array with size n
    for(int m = 0; m < n; m++){
        std::cin >> myArr[m]; // Read the elements of the array
    }

    myFun(myArr, n);
    for (int i = 0; i < n; i++) {
        std::cout << myArr[i] << " "; // Print the sorted array
    }
    std::cout << std::endl;
    return 0;
}