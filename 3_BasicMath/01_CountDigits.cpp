#include <bits/stdc++.h>

int main() {
    int n;
    int counter = 0;
    std::cin >> n;
    int num = n; // Assign the input value to num
    while (num > 0) {
        int lastDig = num % 10;
        num = num / 10;
        counter++;
    }
    std::cout<<counter<<std::endl;

    return 0;
}