#include<bits/stdc++.h>
// https://www.youtube.com/watch?v=un6PLygfXrA&t=925s

void myFun(int i, int n){
    if(i<1){
        return;

    }
    myFun(i-1,n);
    std::cout<<i;
}

int main(){
    int n;
    std::cin>>n;
    myFun(n,n);
}
