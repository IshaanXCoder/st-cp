#include <bits/stdc++.h>

int main() {
    int n;
    int ogNum = n;
    std::cin>>n;
    int revNum=0;
    while(n > 0){
   
        int lastDig = n%10;
        n=n/10;
        revNum = (revNum*10) + lastDig;
    }

    if(n<0){
        return false;
        }
    else if(ogNum == revNum){
        return true;
    }    
    else{
        return false;
    }
    return 0;
}