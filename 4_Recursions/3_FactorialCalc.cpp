#include<bits/stdc++.h>

int myFunc(int n){
    if(n<1){
        return 1;
    }
    return (n * myFunc(n-1));
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<myFunc(n);
}