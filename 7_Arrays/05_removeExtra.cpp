#include <vector>
#include <iostream>

int main() {
    std::vector<int> myVect = {1, 1, 1, 1, 2, 3, 4, 5, 6, 6, 6, 7, 8, 8};

    for (int i = 0; i < myVect.size() - 1;i++) {
        if (myVect[i] == myVect[i + 1]) {
            myVect.erase(myVect.begin() + i + 1);
        } 
    }

    // Print the vector
    for (int i = 0; i < myVect.size(); ++i) {
        std::cout << myVect[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}