#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 100;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;


    *ptr  = *ptr+ 100;
    cout<<ptr<<endl; //address will remain samee!!!
    cout<<*ptr<<endl;

    ptr = ptr+10;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}
