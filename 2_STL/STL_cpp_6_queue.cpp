#include <bits/stdc++.h> 

int main() {

    std::queue<int> q; // Creating an empty queue of integers

    // Adding elements to the queue
    q.push(1);    // Adding 1 to the back of the queue
    q.push(2);    // Adding 2 to the back of the queue
    q.push(13);   // Adding 13 to the back of the queue
    q.push(131);  // Adding 131 to the back of the queue

// 1
// 1,2
// 1,2,13
// 1,2,13,131


    // Accessing and printing the front element
    std::cout << "Front element: " << q.front() << "\n"; // Output: 1 (front of the queue)

    // Accessing and printing the back element
    std::cout << "Back element: " << q.back() << "\n";   // Output: 131 (back of the queue)

    q.pop(); // Removing the front element (1)

    // Accessing and printing the new front element
    std::cout << "New front element: " << q.front() << "\n"; // Output: 2 (new front of the queue after pop)

    // Getting the size of the queue
    std::cout << "Size of queue: " << q.size() << "\n"; // Output: Size of queue: 3

    // Checking if the queue is empty
    if (q.empty()) {
        std::cout << "The queue is empty\n";
    } else {
        std::cout << "The queue is not empty\n"; // Output: The queue is not empty
    }

    return 0;}