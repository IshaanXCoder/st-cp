#include <iostream>

int myFun(int n, int* arr, int num) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

int main() {
    int num;
    std::cout << "Enter the number to search for: ";
    std::cin >> num;

    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int result = myFun(n, arr, num);
    if(result != -1) {
        std::cout << "Number found at index: " << result << std::endl;
    } else {
        std::cout << "Number not found in the array." << std::endl;
    }

    return 0;
}