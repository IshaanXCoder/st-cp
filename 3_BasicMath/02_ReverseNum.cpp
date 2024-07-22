#include <bits/stdc++.h>

int main() {
    int n;
    std::cin>>n;
    int revNum=0;
    while(n > 0){
   
        int lastDig = n%10;
        n=n/10;
        revNum = (revNum*10) + lastDig;


    }
    std::cout<<revNum;
    return 0;
}