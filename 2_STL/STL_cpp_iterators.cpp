

#include <bits/stdc++.h>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5}; // Initialize vector with some values
    std::vector<int>::iterator it = v.begin();
    it++;
    std::cout << *(it) << std::endl;

    return 0;
}