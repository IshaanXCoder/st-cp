#include<bits/stdc++.h>
using namespace std;

class employee{
    public: //change 2
    int id;
    double salary;
    string jobtitle;

}; //SEM ICOLON MAT BHULNA!!

void display_data(employee *e1){
    cout<<e1->id<<endl;
    cout<<e1->salary<<endl;
    cout<<e1->jobtitle<<endl;

}

int main(){
    employee *e1 = new employee;
    e1->id = 10210;
    e1->salary = 100.4;
    e1->jobtitle = "engineer";
    display_data(e1); //fucntion call
}