#include<bits/stdc++.h>
int main(){
    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i ;j++){
            std::cout<<" ";
        }

        for(int j=0;j<=2*n-1-2*i;j++){
            std::cout<<"*";
        }

        for(int j=0;j<=i ;j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;

    }
}