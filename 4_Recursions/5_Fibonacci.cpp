#include<bits/stdc++.h>

int fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<fibonacci(n);
}