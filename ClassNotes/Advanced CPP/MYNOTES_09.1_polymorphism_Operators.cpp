#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    // Constructor to set default values
    complex()
    {
        real = 0;
        imag = 0;
    }

    // Function to set the values of real and imag
    void set_data(int x, int y)
    {
        real = x;
        imag = y;
    }

    // Display function without the extra semicolon
    void display_data()
    {
        cout << real << " + i" << imag << endl;
    }

    // Overloading the + operator
    complex operator+(complex c)
    {
        complex temp;
        temp.real = this->real + c.real;
        temp.imag = this->imag + c.imag;
        return temp;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(5, 6);
    c3 = c1 + c2;      // This will call the overloaded operator+
    c3.display_data(); // Displaying the result of addition
    return 0;
}