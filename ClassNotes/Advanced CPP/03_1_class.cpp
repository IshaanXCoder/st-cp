#include <bits/stdc++.h>
using namespace std;

class employee {
  private: // Yeh private members hai, seedha access nahi kar sakte
    int id; // Employee ka ID
    double salary; // Employee ka salary
    string jobtitle; // Employee ka job title

  public: 
    void set_data(int id, double salary, string jobtitle); 
    void display_data(); 
}; //semicolon mat bhoolo!

// SCOPE RESOLUTION OPERATOR lagake define kar rahe hai functions ko
void employee::set_data(int id, double salary, string jobtitle) {
    // `this` pointer se differentiate kar rahe hai member variables aur function parameters ko.
    // Jab bhi function ke parameters aur class ke members ka naam same hota hai, toh `this` pointer kaam aata hai.

    /*
    Example: is function mein, id = id karne se confusion hota hai ki kis `id` ko assign kare (member variable ya parameter).
    `this->` ka matlab hai ki "iss class object" ka `id`. So:
    
    `this->id` = *current object* ka `id`
    `id` = function ka parameter jo `set_data` ko diya gaya tha.

    */

    this->id = id; // `this->id` refers to the `id` of the object, `id` is function parameter
    this->salary = salary; // `this->salary` refers to object variable, `salary` is function parameter
    this->jobtitle = jobtitle; // Similarly, `this->jobtitle` is object member, `jobtitle` is the parameter
}

// Display function ko properly define karna hoga, `()` lagake
void employee::display_data() {
    // `this` pointer ka hidden use hota hai yahaan bhi.
    // Jab hum `id` ko directly use karte hain, yeh `this->id` ko refer karta hai internally.
    
    cout << "ID: " << id << endl; // `this->id` print ho raha hai yehan pe
    cout << "Salary: " << salary << endl; // Similarly `this->salary` ko print karenge
    cout << "Job Title: " << jobtitle << endl; // `this->jobtitle` ko print karenge
}

int main() {
    employee e1; // `e1` naam ka object create kiya `employee` class ka

    // Direct access nahi hoga, use the set_data function instead
    e1.set_data(10210, 100.4, "engineer"); // `set_data` ko call karke data set kar rahe hai e1 object mein

    // Correct way to display the data
    e1.display_data(); // Function call through object
}



//COMSTRUCTOR AND DESTRUCTOR NAHI SAMJHA, WOH KARLENA