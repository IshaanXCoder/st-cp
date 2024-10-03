#include <iostream>
using namespace std;

// Definition of the 'employee' class
class employee
{
private:
    int id;              // Unique employee ID
    double salary;       // Salary amount
    string jobtitle;     // Designation of the employee

public:
    // Method prototypes to set and display employee data
    void set_data(int id, double salary, string jobtitle);
    void display_data();
    employee();  // Constructor
    ~employee(); // Destructor
};

// Constructor definition: automatically called when an object is created
employee::employee()
{
    cout << "object created." << endl;
}

// Destructor definition: automatically called when an object goes out of scope or is deleted
employee::~employee()
{
    cout << "object destroyed." << endl;
}

// Method to set employee data
void employee::set_data(int id, double salary, string jobtitle)
{
    this->id = id;                // Assign parameter 'id' to class variable 'id' using 'this' pointer
    this->salary = salary;        // Set the salary
    this->jobtitle = jobtitle;    // Set the job title
}

// Method to display employee data
void employee::display_data()
{
    cout << id << endl;           // Output ID
    cout << salary << endl;       // Output Salary
    cout << jobtitle << endl;     // Output Job Title
}

int main()
{
    employee e1[10];  // Create an array of 10 'employee' objects

    // Uncomment below lines to set and display data for a specific employee
    // e1[0].set_data(100, 100.5, "engineer");  
    // e1[0].display_data();

    return 0;
}