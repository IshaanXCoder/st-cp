#include<bits/stdc++.h>
#include<deque>


int main() {
    std::deque<int> myDeq; // Creating an empty deque of integers

    // Adding elements to the deque
    myDeq.push_back(2);    // Adding 2 to the end of the deque
    myDeq.push_front(1);   // Adding 1 to the front of the deque

    // Printing the elements of the deque
    for(int i: myDeq) {
        std::cout << i << " "; // Output: 1 2
    }
    std::cout << "\n";         // Printing newline for better readability

    myDeq.pop_back();          // Removing the last element (2)

    // Printing the elements of the deque after pop_back
    for(int i: myDeq) {
        std::cout << i << " "; // Output: 1
    }
    std::cout << "\n";         // Printing newline for better readability

    // Accessing and printing the element at index 0
    std::cout << "Element at 0 is " << myDeq.at(0) << "\n"; // Output: Element at 0 is 1

    return 0; // Indicating that the program ended successfully
}