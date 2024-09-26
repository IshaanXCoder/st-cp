#include<bits/stdc++.h>
using namespace std;

#define MAX 3
// this will replace size wiith 100 throughout the code


int main(){

    int var[MAX] = {10, 100, 200};
    int *ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    // this will give out garbage values


// but now coming neeche
ptr = var;
// pointer ptr ko var ki taraf vary krdiyaam so ab ptr ki value 10 ka octadeciaml aayga and *ptr  10 aayga
    cout<<ptr<<endl;    // Output: address of arr[0]
    cout<<*ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl; //Output: address of `ptr` (different from the address of `arr[0]`)



    int * *ptr1 = &ptr;
    cout<<ptr << " " << *ptr1<<endl;
    cout<<ptr1<<endl;
    cout<<&ptr<<endl;

}
