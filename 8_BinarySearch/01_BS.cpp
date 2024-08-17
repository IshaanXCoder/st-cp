#include <iostream>

int myFun(int myArr[], int n, int target) {
    int low, high, mid;
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (myArr[mid] == target) {
            return mid;
        } else if (target > myArr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
            
        }
    }
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    
    int myArr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }

    int target;
        std::cin >> target;

    // inki positions are 0,1,2,3...7
    // first term is low, last is high, and beech ke saare are search space
    // new integer named mid to be introduced, mid is [(0+7)/2]th [or iska floor value] value
    // search will be from mid to high
    // agar mil gaya toh theek, else make the value just left to mid as new high (dimaag me imagine kar!! so we've trimmed the search space)
    // so our new high is 2, low is 0 so mid is 1

    int outpt = myFun(myArr, n, target);
    std::cout << outpt;

    return 0;
}