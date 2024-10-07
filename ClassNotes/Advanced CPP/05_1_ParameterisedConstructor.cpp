#include <bits/stdc++.h>
using namespace std;

class employee {
  public:
    string name;
    string dept;
    int ID;

    // 1. Non-parameterized Constructor
    employee() {
        name = "Unknown";
        dept = "Not Assigned";
        ID = 0;
    }

    // 2. Parameterized Constructor
    employee(string n, string d, int id) {
        name = n;
        dept = d;
        ID = id;
    }

    // 3. Copy Constructor
    employee(const employee &emp) {
        name = emp.name;
        dept = emp.dept;
        ID = emp.ID;
    }

    // Function to display employee details
    void display() {
        cout << "Name: " << name << ", Dept: " << dept << ", ID: " << ID << endl;
    }
};

int main() {
    // Using Parameterized Constructor
    employee e1("Ishaan", "Meta", 213);
    e1.display();


//default copy constructor!
    // Using Copy Constructor
    employee e2(e1);  // e2 is a copy of e1
    e2.display();

    // Using Non-parameterized Constructor
    employee e3;
    e3.display();

    return 0;
}