#include <iostream>
#include <string>
using namespace std;

class person { // Added missing 'person' class definition
public:
    string first_name; 
    string last_name; 
    string city; 
}; 

class student : public person { // Inherit from 'person'
private:
    string school;
    int grade;

public: // Added public access specifier
    void set_data(string first_name, string last_name, string city, string school, int grade);
    void display_data(); // Added parentheses to indicate it's a method
};

void student::set_data(string first_name, string last_name, string city, string school, int grade) {
    this->first_name = first_name;
    this->last_name = last_name;
    this->city = city;
    this->school = school;
    this->grade = grade;
}

void student::display_data() { // Added parentheses
    cout << first_name << endl << last_name << endl << city << endl << school << endl << grade << endl;
}

int main() {
    student s;
    
    s.set_data("Ishaan", "Kesarwani", "Gurgaon", "Mris", 91); // Corrected the city name spelling
    s.display_data(); // Added parentheses to call the function
    
    return 0; // Added return statement
}