#include<iostream>
int main(){
    // what is a pointer ----> a type of datatype which holds address of other datatypes

    int a=3;
    int* b= &a;

    // create a pointer variable b which olds the adress of a
    // & is address of operator and * is deferencing operator

    std::cout<<"address of a is : "<<&a<<std::endl;
    std::cout<<"address of a is : "<<b<<std::endl;



    std::cout<<"value of b is : "<<*b;


}