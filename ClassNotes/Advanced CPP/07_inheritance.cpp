#include <iostream>
using namespace std;

// ONE IMP PROPERTY ABOUT INHEITANCE IS THAT FIRST PARENT CLASS IS ALLED THEN CHILD CLASS, BUT IN CASE OF DESTURCTION, CHILD CLASS WILL BE CALLED FIRST FOLLOWED BUY PARENT CLASSS

// Class Person (Parent/Base class)


class Person {
public:
    string name;
    int age;

    // Default constructor
    Person() {}

    ~Person() {
                cout<<"destructing Parent";

    }
};

// Class Student (Child/Derived class)
class Student : public Person {
public:
    int rollno;

    // Member function to display student information
    void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Roll No : " << rollno << endl;
    }

    ~Student(){
        cout<<"destructing child";
    }
};

int main() {
    Student s1;
    s1.name = "Ishaan";
    s1.age = 24;     // Corrected to integer
    s1.rollno = 134; // Corrected to integer

    s1.getInfo(); // Corrected function call
    return 0;
}