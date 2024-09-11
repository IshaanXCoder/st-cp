#include <iostream>
using namespace std;

int main() {
    // 1. Declare an integer variable
    int num = 10;
    
    // 2. Declare a pointer to int and initialize it with the address of 'num'
    int *ptr = &num;  // '&' gives the memory address of 'num'
    
    // 3. Output the value of 'num' and the memory address stored in 'ptr'
    cout << "Value of num: " << num << endl; // Value of num is 10
    cout << "Memory address of num: " << &num << endl; // Prints address of 'num'
    cout << "Pointer ptr stores: " << ptr << endl; // Pointer stores the same address

    // 4. Dereference the pointer to get the value stored at that memory address
    cout << "Value at the address stored by ptr: " << *ptr << endl; // Dereferencing pointer, prints 10
    
    // 5. Modify the value of 'num' using the pointer
    *ptr = 20;  // Changes the value at the memory location 'ptr' points to

    
    cout << "New value of num after modification via pointer: " << num << endl; // Prints 20
    
    // 6. Demonstrate a null pointer
    int *nullPtr = nullptr;  // nullptr indicates that the pointer is not assigned any memory address
    cout << "Null pointer value: " << nullPtr << endl;  // Outputs 0 (null)
    
    return 0;
}