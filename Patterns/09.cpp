#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i ;j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
    for(int j=0;j<n;j++){
        std::cout<<"*";
    }
    std::cout<<std::endl;

    for(int i=1;i<n;i++){
        for(int j=n-i;j>=1;j--){
            std::cout<<"*";
            }
            std::cout<<std::endl;
    }

    
}