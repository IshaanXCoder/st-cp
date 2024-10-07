#include <bits/stdc++.h>
using namespace std;

class employee {
  private: 
    int id; 
    double salary; 
    string jobtitle; 

  public: 
    void set_data(int id, double salary, string jobtitle); 
    void display_data(); 

//setter
    void setSalary(double s){
        salary = s; 
    }

//getter = public functions which return private values
    double getSalary(){
        return salary;
    }
}; 
