#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    void set_data(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void display_data()
    {
        cout << real << " + i" << imag << endl;
    }

    complex operator-(complex c)
    {
        complex temp;
        temp.real = this->real - c.real;
        temp.imag = this->imag - c.imag;

        return temp;
    }
};

/////THE OPERATOR IS TO BE DEFINED INSIDE THE CLASS!!

int main()
{
    complex c1, c2, c3;
    c1.set_data(4, 5);
    c2.set_data(1, 2);
    c3 = c1 - c2;
    c3.display_data();
    return 0;
}