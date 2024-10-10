// structures
#include <iostream>
using namespace std;

// definigtion of the class
class employee
{
    // private members of the class
    private: // access specifier: public, private (default), protected
    int id;
    double salary;
    string jobtitle;
    
    // public member fucntions
    public:
    void set_data(int id, double salary, string jobtitle);
    friend void display_data(employee e);
    //employee(); // constructor prototype "default" or do-nothing
    //employee(int id, double salary, string jobtitle); // parameterized constructor
    //employee(int id);
    //employee(double salary, string jobtitle);
    
    // constructor overloading
    
    //~employee(); // destructor
};

//employee::employee() // definition of default constructor
//{
    //cout << "object created." << endl;
//}

//employee::employee(int id, double salary, string jobtitle)
//{
    //id = id;
    //salary = salary;
    //jobtitle = jobtitle;
    
    //cout << id << endl;
    //cout << salary << endl;
    //cout << jobtitle << endl;    
//}

//employee::~employee()
//{
    //cout << "object destroyed." << endl;
//}

//:: -> scope resolution operator
//<return type> <class name>::<function name>(<function parameters>)
void employee :: set_data(int id, double salary, string jobtitle)
{
    this->id = id; // this pointer
    this->salary = salary; // 100.5
    this->jobtitle = jobtitle; // "engineer"
}
void display_data(employee e)
{
    cout << e.id << endl;
    cout << e.salary << endl;
    cout << e.jobtitle << endl;
}
int main()
{
    employee e2;
    //employee e1(100, 100.5, "engineer"); // e1 is an object
    
    e2.set_data(100, 100.5, "engineer"); // function call
    
    display_data(e2);
    
    //cout << "I am here." << endl;

    return 0;
}
