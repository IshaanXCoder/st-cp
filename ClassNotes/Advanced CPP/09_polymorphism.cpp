// Polymorphism: Two types — Static and Dynamic

// 1. Static Polymorphism (Compile-time)
//    - Achieved via Function Overloading and Operator Overloading.
//    - Example: * used as both multiplication and dereference operator.

// 2. Dynamic Polymorphism (Run-time)
//    - Achieved via Pointers and Virtual Functions (for dynamic binding).
//    - Example: cin (>>) and cout (<<) operators in C++.

//+ : additons operator : addinfg hte contents of diffrent objects

#include <iostream>
using namespace std;

class test
{

private:
    // bydefault priavte he thaa agar ham assign na kare!
    int x,
        y;

public:
    void set_data(int x, int y);
    void display_data();
};

void test::set_data(int x, int y)
{
    this->x = x;
    this->y = y;
}
void test::display_data()
{
    cout << x << endl;
    cout << y << endl;
}

int mian()
{
    test t1, t2;
    t1.set_data(1, 5);
    t2.set_data(3, 7);
    test t3 = t1 + t2;
    t3.display_data;
}