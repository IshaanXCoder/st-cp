#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(56);
    vec.push_back(743);
    vec.push_back(24);
    vec.push_back(2);
    vec.push_back(3);

    std::cout << "Vector right now is: " << std::endl;
    for(int i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Insert a single element at position 3
    vec.insert(vec.begin() + 3, 4);

    std::cout << "Vector after inserting 4 at position 3: " << std::endl;
    for(int i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Insert multiple elements (2 times) at position 2
    vec.insert(vec.begin() + 2, 2, 10);

    std::cout << "Vector after inserting 10, 10 at position 2: " << std::endl;
    for(int i : vec){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}