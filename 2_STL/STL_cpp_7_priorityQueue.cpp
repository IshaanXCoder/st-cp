#include <bits/stdc++.h> 

// priorit queue me max element isat top of the heap!
// agar minimum ko top krnahe toh neeche waala syntax dekh!
int main() {
    // Maximum Heap (default behavior of priority_queue)
    std::priority_queue<int> pq;
    pq.push(5);          // {5}
    pq.push(2);          // {5, 2}
    pq.push(8);          // {8, 5, 2}
    pq.emplace(10);      // {10, 8, 5, 2}

    std::cout << pq.top(); // prints 10
    pq.pop();              // {8, 5, 2}
    std::cout << pq.top(); // prints 8

    // Minimum Heap
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_pq;
    min_pq.push(5);       // {5}
    min_pq.push(2);       // {2, 5}
    min_pq.push(8);       // {2, 5, 8}
    min_pq.emplace(10);   // {2, 5, 8, 10}

    std::cout << min_pq.top(); // prints 2

    return 0;
}
