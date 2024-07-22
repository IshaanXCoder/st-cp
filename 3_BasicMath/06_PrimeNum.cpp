#include<bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;   
    int counter = 0;
    for(int i=1; i<=n; i++){
        if(n % i ==0){
            counter++;

        }

    }
    if(counter == 2){
        std::cout<<"It is pirme";
    }
    else{
        std::cout<<"no it is not";
    }
}