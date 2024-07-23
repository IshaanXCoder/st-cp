#include<bits/stdc++.h>

void myFun(int i,int sum){
    if(i<1){
        std::cout<<sum;
        return;
    } 
    myFun(i-1, sum+i);
}

int main(){
    int i;
    std::cin>>i;
    myFun(i,0);
}