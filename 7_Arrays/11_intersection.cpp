#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Intersection(int n, int m, int arr1[], int arr2[]) {
    std::vector<int> myVect;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr1[i] == arr2[j]) {
                // Check if the element is already in the vector
                if(std::find(myVect.begin(), myVect.end(), arr2[j]) == myVect.end()) {
                    myVect.push_back(arr2[j]);
                }
            }
        }
    }
    return myVect;
}

int main() {
    int n, m;

    std::cout << "Enter the number of elements in the array 1: ";
    std::cin >> n;

    int arr1[n];
    std::cout << "Enter the elements of the array 1: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the number of elements in the array 2: ";
    std::cin >> m;

    int arr2[m];
    std::cout << "Enter the elements of the array 2: ";
    for (int i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }

    std::vector<int> myVect = Intersection(n, m, arr1, arr2);

    std::cout << "Intersection of arr1 and arr2 is: ";
    for (int i = 0; i < myVect.size(); ++i) {
        std::cout << myVect[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}