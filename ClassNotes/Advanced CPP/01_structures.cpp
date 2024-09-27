#include<bits/stdc++.h>
using namespace std;

//STRUCT WILL BE OUTSIDE INT MAIN!!!


// structure is like defining a new datatype, so it goes like struct(keyword) fokllwoed by name of the datatype
//USER DEFINED DATATYPE!
struct employee{

    //MEMBERS OF THE STRUCTURE
    string name;
    int rolnumber;
}; //DO NOT FORGET A SEMICOLON!!!

// EVEN TYPEDEF IS USED TO CREATE A USER DEFINED DATATYPE!
// typedef int employee;



int main(){
    employee e1;
    // e1 is the anme of the variable
    e1.name = "ishaan";
    e1.rolnumber = 4321;
    // .(dot) operator is used to assigntthe required values


    //now if we create a pointer e2
    employee dummy;
    // employee *e2 = &dummy;
    employee *e2 = new employee;
    // dynamic varibale banadiyaa!


    // when we're working with poitners, ,we dont use dot function for initiaisation , instead we use arrow operators
    e2->name = "newishaan";
    e2->rolnumber = 12345;
    cout << "Name: " << e2->name << endl;
    cout << "Roll Number: " << e2->rolnumber << endl;

    delete e2;
    // delete e2 wil; delete the poitner and free it from dynamic meory!


}

