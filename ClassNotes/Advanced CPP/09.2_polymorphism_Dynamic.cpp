#include <iostream>
using namespace std;

class parent
{
public:
    virtual void identify()
    // virtual : this keyword is used to make the function virtual
    //  EXPLANATION AT LINE 61,62

    {
        cout << "I am the parent" << endl;
    }

    void common()
    {
        cout << "I am the member of the family" << endl;
    }
};

// Inheriting the parent class to the child class
class child : public parent
{
public:
    void identify() // this is th eexample of function overriding
    {
        cout << "I am the child" << endl;
    }

    void relation()
    {
        cout << "I am the child and inherit from the parent" << endl;
    }
};

class grandchild : public child
{
public:
    void identify()
    {
        cout << "I am the grandchild" << endl;
    }

    void relation()
    {
        cout << "I am the grandchild and inherit from the child" << endl;
    }
    // child has the access the to the parent class and grandchild has access to the child class, so the grandchild has access to the parent class as well
};

int main()

{
    parent *par = new parent; // dynamic memory allocation
    par->identify();          // I am the parent
    child *ptrc = new child;
    grandchild *ptrg = new grandchild;

    ptrc->identify(); // I am the son
    ptrg->identify(); // I am the grandchild

    // if i write ptrc->parent::identify(); -------->>>> then it will print I am the parent
    // same with ptrg->parent::identify(); -------->>>> then it will print I am the parent

    // this is called explicit call to the parent class function

    // base class pointer
    parent *ptr1 = new child;
    parent *ptr2 = new grandchild;

    ptr1->identify(); // I am the parent
    ptr2->identify(); // I am the parent
    ///// these are drived cclasss pointer pointing to the base class object hence output will come as I am the parent

    //////IF WE WRITE VIRTUAL KEYWORD IN FRONT OF THE FUNCTION IN THE BASE CLASS THEN THE OUTPUT WILL BE DIFFERENT
    ///// WE WILL OBTAIN THE OUTPUT OF THE DERIVED CLASS INSTEADO OF THE PARENT CLASSS

    ptr1->common(); // I am the member of the family       //not overriding, but inheritance
    ptr2->common(); // I am the member of the family     //not overriding, but inheritance

    /////explicit call to the parent class function
    parent p;
    p.common(); // I am the member of the family

    grandchild g;
    g.relation(); // I am the grandchild and inherit from the child

    // ptr2->relation();
    //////error: no member named 'relation' in 'parent'
}