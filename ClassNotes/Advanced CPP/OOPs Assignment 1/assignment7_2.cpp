// Data members are usually private and member functions are usually public. Remember the
// notion: “Private data, public interface”. However, there are no hard and fast rules. If the data
// member is made public, it could be accessed directly using the dot(.) operator. Write a C++
// program to demonstrate this.


#include <iostream>
using namespace std;

class student {

    public:
    int rollnumb;
    string name;
    float cg;

    student(int rollnumb, string name, float cg){
         this->rollnumb = rollnumb;
         this->name=name;
         this->cg=cg;
    }

};

int main(){
    student s1(23412, "ishaan", 8.2);

    cout<<s1.name;
    cout<<s1.cg;
    cout<<s1.rollnumb;

}

