#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int m;
        cin >> n >>m;
        if (n < m) {
        std::cout << "lesser";
    } else if (n == m) {
        std::cout << "equal";
    } else {
        std::cout << "greater";
    }

    return 0;

    }