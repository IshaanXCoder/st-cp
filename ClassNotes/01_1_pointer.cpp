#include<bits/stdc++.h>
using namespace std;
int main(){
// bas eneche wala krenge toh error aayga!!
    // *ptr = 100;
    // cout<< *ptr;

    int a = 0;
    int *ptr = &a;
    *ptr = 100;
    cout<< *ptr<<endl;

 
    int *newptr = new int; //dynamic memory
    *newptr = 100;
    cout<<*newptr<<endl;


// neeeche ak part will give shit but agar iske neeche waal eme new int jaisa kuch kare toh it will work :)
    int *againnewptr;
    cin>>*againnewptr;
    cout<<againnewptr<<endl;
    cout<<*againnewptr<<endl;
    
    
    int *aganewptr;
    cin>>*aganewptr;
    cout<<aganewptr<<endl;
    cout<<*aganewptr<<endl;

}