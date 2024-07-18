#include <bits/stdc++.h> 

int main() {
    std::stack<int> st; // Creating an empty stack of integers

    // Adding elements to the stack
    st.push(1);    
    st.push(2);    
    st.push(13);  
    st.push(131); 


    // 1
    // 2,1
    // 13,2,1
    // 131,13,2,1

    // INSHORT, YEH BAS EK VERTICAL FORMAT ME HE, BAAKI SAB SAME SAME RAHEGA


    std::cout << st.top() << "\n"; // Output: 131 (top of the stack)

    st.pop(); // Removing the top element (131)

    // Accessing and printing the new top element
    std::cout << st.top() << "\n"; // Output: 13 (new top of the stack after pop)

    // Getting the size of the stack
    std::cout << "Size of stack: " << st.size() << "\n"; // Output: Size of stack: 3

    // Checking if the stack is empty
    if (st.empty()) {
        std::cout << "The stack is empty\n";
    } else {
        std::cout << "The stack is not empty\n"; // Output: The stack is not empty
    }

    return 0; // Indicating that the program ended successfully
}