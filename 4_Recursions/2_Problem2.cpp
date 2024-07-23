#include<bits/stdc++.h>

void myFunc(int i,int n){
    if(i>n){
        return;
    } else{
        std::cout<<i<<" ";
    }
    myFunc(i+1,n);

}

int main(){
    int n;
    std::cin>>n;
    myFunc(1,n);
    return 0;
}