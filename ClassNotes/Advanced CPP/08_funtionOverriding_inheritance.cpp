//////////FUNCTION OVERRIDING
///////DEROVED CLASS FUNCTION WILL OVER WRIE THE BASE CLASS FUNCION!!
///////WE CAN SHARE DATA TO INHERTIOED NEW WALA IN CASE OF PUBLIC AND PROTECTED, NOT IN PRIVATE!!!!


#include <iostream>
#include <string>
using namespace std;

class person { // Added missing 'person' class definition
public:
     void base_class_function(){
        cout<<"this is base class fucntion";
     }
}; 

class student : public person { // Inherit from 'person'
public:
    void base_class_function(){
            cout<<"this is derived class fucntion";
        }
};

int main() {
    student s;
    
    s.base_class_function();

    return 0; // Added return statement
}