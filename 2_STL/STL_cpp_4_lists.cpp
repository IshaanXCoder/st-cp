#include <bits/stdc++.h> 


int main() {
    std::list<int> myList; // Creating an empty list of integers


    myList.push_back(2);    
    myList.push_front(1);   

    // Printing the elements of the list
    for(int i: myList) {
        std::cout << i << " "; // Output: 1 2
    }
    std::cout << "\n";         // Printing newline for better readability

    myList.pop_back();         // Removing the last element (2)

    // Printing the elements of the list after pop_back
    for(int i: myList) {
        std::cout << i << " "; // Output: 1
    }
    std::cout << "\n";         // Printing newline for better readability

    // Accessing and printing the front element
    std::cout << "Front element is " << myList.front() << "\n"; // Output: Front element is 1

    // Accessing and printing the back element
    // (Only one element left in the list, so front and back are the same)
    std::cout << "Back element is " << myList.back() << "\n"; // Output: Back element is 1

    // Adding more elements for further demonstration
    myList.push_back(3);    // Adding 3 to the end of the list
    myList.push_back(4);    // Adding 4 to the end of the list

    // Iterating and printing using an iterator
    std::cout << "List elements: ";
    for(std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " "; // Output: 1 3 4
    }
    std::cout << "\n";         // Printing newline for better readability

    // Removing the first element
    myList.pop_front(); // Removing the front element (1)

    // Printing the elements of the list after pop_front
    std::cout << "After pop_front: ";
    for(int i: myList) {
        std::cout << i << " "; // Output: 3 4
    }
    std::cout << "\n";         // Printing newline for better readability

    return 0; // Indicating that the program ended successfully
}