#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age<18){
        cout << "youre not eligible";
    }
    else if(age >=18 && age <=54){
        cout << "eligible for job";

    }
    else if (age >=55 && age<=57){
        cout << "elgible, but soon retirement";
    }
    else{
        cout << "retire hojaa";
    }
    return 0;
}