#include <bits/stdc++.h>

// Selection sorting --->> Select the minimums and swapping it 
// Example if 10 20 9 1 14 is an array
// After sorting -->> 1 20 9 10 14
// Again after sorting -->> 1 9 20 10 14
// Again after sorting -->> 1 9 10 20 14
// Again after sorting -->> 1 9 10 14 20

void myFun(int myArr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int myMin = i;
        // ek n size ka array he, it contains elements from 0 to n-1
        // swapping will be at max between second last and last entry, i.e. n-2 and n-1 entry

        // algo for this will be
        // 1. swap between 0 and minimum between [0 to n-1]
        // 2. swap between 1 and minimum between [1 to n-1]
        // #. swap between 2 and minimum between [2 to n-1]
        // thus inside the for loop we need an internal loop of j where j starts from i + 1
        for (int j = i + 1; j < n; j++) {
            if (myArr[j] < myArr[myMin]) {
                myMin = j;
            }
        }

        // we'll swap myMin with i using the below code
        int temp = myArr[myMin];
        myArr[myMin] = myArr[i];
        myArr[i] = temp;

        // TO SWAP TWO ELEMENTS IN AN ARRAY SUPPOSE AT POSITION A and B;
        // we'll declare a new constant named temp and equate it to arr[A]
        // equate arr[A] with arr[B] and then arr[B] to temp;
    }
}

int main() {
    int n;
    // n is number of elements
    std::cin >> n;
    int myArr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }
    myFun(myArr, n);
    for (int i = 0; i < n; i++) {
        std::cout << myArr[i] << " ";
    }
    std::cout << std::endl;  // To ensure the output ends with a newline
    return 0;
}