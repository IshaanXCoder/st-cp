#include<bits/stdc++.h>
using namespace std;

// Structure to define employee attributes
struct employee{
    int id;
    double salary;
    string jobtitle;
}; // SEMICOLON MAT BHULNA!!

// Function to display the details of an employee
void display_data(employee *e1){
    cout << e1->id << endl;
    cout << e1->salary << endl;
    cout << e1->jobtitle << endl;
}

int main(){
    employee *e1 = new employee;  // Dynamically creating an employee object
    e1->id = 10210;
    e1->salary = 100.4;
    e1->jobtitle = "engineer";
    display_data(e1);  // Function call to display employee details
}