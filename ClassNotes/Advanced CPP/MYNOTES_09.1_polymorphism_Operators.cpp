#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
        // to set the default values of real and imag to 0
    }
    void set_data(int x, int y)
    {
        real = x;
        imag = y;

        // or we could have done this->real = x;
    }

    void display_data();
    {
        cout << real << " + i" << imag << endl;
    }
};

// this is how we oevraload an operator

//{name of dataype} OPERATOR {operator sign} (datatype)

complex operator+(complex c)
{
    complex temp;
    temp.real = c.real;
    temp.imag = c.imag;
    return temp;
}

int main()
{
    complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(5, 6);
    c3 = c1 + c2;
    c3.display_data();
    return 0;
}