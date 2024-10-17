#include <iostream>
using namespace std;

// Class definition
class test
{
    int x;
    int y;

public:
    void set_data(int x, int y);
    void disp_data();

    // Operator overloading for the '+' operator to add two 'test' objects
    test operator+(test t3)
    {
        test result;         // Create a temporary object to store the result
        result.x = x + t3.x; // Add the x values of the two objects
        result.y = y + t3.y; // Add the y values of the two objects
        return result;       // Return the result object
    }

    // Operator overloading for the '-' operator to subtract two 'test' objects
    test operator-(test t3)
    {
        test result;         // Create a temporary object to store the result
        result.x = x - t3.x; // Subtract the x values of the two objects
        result.y = y - t3.y; // Subtract the y values of the two objects
        return result;       // Return the result object
    }
};

// Member function definition outside the class
// Sets the values of the data members using 'this' pointer to differentiate between local and class variables
void test ::set_data(int x, int y)
{
    this->x = x; // Set the value of the class variable 'x'
    this->y = y; // Set the value of the class variable 'y'
}

// Member function definition to display the values of x and y
void test::disp_data()
{
    cout << " Value of x is " << x << endl; // Display value of x
    cout << " Value of y is " << y << endl; // Display value of y
}

int main()
{
    test t1, t2;       // Create two test objects t1 and t2
    t1.set_data(2, 3); // Set values for t1 (x = 2, y = 3)
    t2.set_data(5, 7); // Set values for t2 (x = 5, y = 7)

    // Use overloaded + operator to add t1 and t2, store result in 'add'
    test add = t2 + t1; //////OPERATOR OVERLOADING!!

    // Use overloaded - operator to subtract t2 from t1, store result in 'sub'
    test sub = t1 - t2;

    // Display the result of the addition
    add.disp_data();
    sub.disp_data();

    // 'sub' is created but not displayed, so you may want to call sub.disp_data() if needed
}