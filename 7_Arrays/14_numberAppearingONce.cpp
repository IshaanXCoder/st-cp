#include <iostream>

int myFun(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 0;
        int num = arr[i];
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count++;
            }
        }
        if (count == 1) {
            return num;
        }
    }
    return -1; // Return -1 if no unique element is found
}

int main() {
    int n; 
    std::cout << "Enter n: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int result = myFun(arr, n);
    if (result != -1) {
        std::cout << "The first unique element is: " << result << std::endl;
    } else {
        std::cout << "No unique element found." << std::endl;
    }

    return 0;
}