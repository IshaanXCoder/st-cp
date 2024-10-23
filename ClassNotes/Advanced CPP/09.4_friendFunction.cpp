#include <iostream>
using namespace std;

class Base
{
private:
    int privateValue = 10;

public:
    virtual void show()
    {
        cout << "Base class show function" << endl;
    }

    // Declare friend function
    friend void accessPrivate(Base &obj);

    // the use of friend function is to access private members of the class
};

void accessPrivate(Base &obj)
{
    // Friend function can access private members
    cout << "Accessing private value: " << obj.privateValue << endl;
}

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    Base base;
    Derived derived;
    Base *ptr = &derived;

    ptr->show(); // Polymorphism: Derived class show function

    // Access private member through friend function
    accessPrivate(base); // Output: Accessing private value: 10

    return 0;
}