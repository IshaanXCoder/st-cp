#include<bits/stdc++.h>
using namespace std;
int main(){

    int number = 100;
    int *ptr;  //* --> pointer symbol
    // a is a  poitner variable and stores address vairbale of another variable of same datatype



    ptr = &number;

    // or we can directly write int *ptr = &number -->> shorthand notation

    cout << ptr<<endl; //address -- >> hexadecimal
    cout << *ptr<<endl; // -->> value at poitner
    cout<<sizeof(ptr);


}