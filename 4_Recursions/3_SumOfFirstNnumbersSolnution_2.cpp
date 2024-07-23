#include<bits/stdc++.h>
int myFunc(int n){
    if(n==0){
        return 0;
    }
    return (myFunc(n-1) + n);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<myFunc(n);
}