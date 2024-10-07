#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double cgpa;

    // Constructor: Initializes the class members
    Student(string name, double cgpa) {
        this->name = name;
        this->cgpa = cgpa;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor: Automatically called when the object goes out of scope or is deleted
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    // Member function to display details
    void getInfo() {
        cout << "Name: " << name << ", CGPA: " << cgpa << endl;
    }

int main() {
    // Creating an object of Student class
    Student s1("Ishaan", 9.2);

    // Calling a member function
    s1.getInfo();

    // The destructor is called automatically when the object goes out of scope
    return 0;
}