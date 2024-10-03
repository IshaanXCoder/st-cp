//encapsulation is wrapping up of   dataa&,members functions in a single unit called class
//ek tarah se we've already done all thiss
#include <bits/stdc++.h>
using namespace std;

class employee {
  private: 
    int id; 
    double salary; 
    string jobtitle;  // data hiding

  public: 
    void set_data(int id, double salary, string jobtitle); 
    void display_data(); 
};