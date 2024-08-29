#include<bits/stdc++.h>
int main(){

    int n;
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            std::cout<<" ";

        }

        for(int j=1;j<=2i+1;j++){
            std::cout<<"*";
        }

        for(int j=n-1;j>=0;j--){
            std::cout<<" ";
        }
        std::cout<<std::endl;
        
    }
    return 0;
}