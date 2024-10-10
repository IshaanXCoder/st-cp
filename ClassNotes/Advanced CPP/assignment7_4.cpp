#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void setDetails(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1("Ishaan", 20);
    student1.display();

    student1.setDetails("Aman", 22);
    student1.display();

    return 0;
}