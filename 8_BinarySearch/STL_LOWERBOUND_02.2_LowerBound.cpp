#include<bits/stdc++.h>

int myFun(int n, int x, std::vector<int>& myArr) {
    int low = 0;
    int high = n - 1;
    int ans = -1;  // Initialize ans to -1 to indicate no suitable value found

    while (low <= high) {
        int mid = (low + high) / 2;

        if (myArr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
    
}

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

    std::cout << myFun(n, x, myArr);
    return 0;
}