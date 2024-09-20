#include <bits/stdc++.h>
using namespace std;

int main() {
    // Declare an integer variable 'a' and initialize it with the value 100.
    int a = 100;

    // Declare a pointer 'ptr' of type integer that stores the address of 'a'.
    int *ptr = &a;

    // Print the address of 'a' stored in 'ptr'.
    cout << ptr << endl;

    // Print the value of 'a' using dereferencing the pointer 'ptr'.
    cout << *ptr << endl;

    // The line below would cause a compilation error because 'ptr' is a single pointer, 
    // and dereferencing it twice (**ptr) is not valid for a single-level pointer.
    // cout << **ptr << endl; 

    // Declare a double pointer 'ptr2' which stores the address of the pointer 'ptr'.
    int **ptr2 = &ptr;

    // Print the address of the pointer 'ptr' stored in 'ptr2'.
    cout << ptr2 << endl;

    // Print the value stored in 'ptr' (which is the address of 'a') using dereferencing.
    cout << *ptr2 << endl;

    // Print the value of 'a' using double dereferencing through 'ptr2'.
    cout << **ptr2 << endl;



    // WE CANNOT DO ARITHMETIC STUFF WITH poitnerss!!

    return 0;
}