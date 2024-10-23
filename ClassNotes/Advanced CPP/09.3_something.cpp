#include <iostream>
using namespace std;

// Abstract base class with pure virtual functions
class geometry
{
public:
    // Pure virtual functions to be implemented by derived classes
    virtual int area() = 0;
    virtual int perimeter() = 0;

    // By equating these functions to 0, we are making them pure virtual functions
    // This means that we are not defining these functions in the base class, and
    // any derived class must provide implementations for these functions.
};

class rectangle : public geometry
{
private:
    int length, breadth; // Private members to store dimensions of the rectangle

public:
    // Setter function to assign values to length and breadth
    void set_data(int l, int b)
    {
        this->length = l;
        this->breadth = b;
    }

    // Override the area function from the geometry class
    int area()
    {
        return length * breadth;
    }

    // Override the perimeter function from the geometry class
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    // Pointer of the base class geometry, but pointing to an object of the derived class rectangle
    geometry *ptr = new rectangle();

    // Using the pointer to call the set_data function to set length and breadth
    rectangle *rect = dynamic_cast<rectangle *>(ptr); // We need to cast the pointer to rectangle type to call its methods
    rect->set_data(2, 10);

    // Display the area and perimeter using the pointer of the base class
    cout << "Area: " << ptr->area() << endl;           // Calls the rectangle's area function
    cout << "Perimeter: " << ptr->perimeter() << endl; // Calls the rectangle's perimeter function

    // Free the allocated memory
    delete ptr;

    return 0;
}