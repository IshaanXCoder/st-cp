#include<bits/stdc++.h>

void myFunc(int i,int n){
    

    if(i<=0){
        return;
    }else{
    
    std::cout<<i<<" ";
    myFunc(i-1,n);

    }


}

int main(){
    int n;
    std::cin>>n;
    myFunc(n,n);
    return 0;
}