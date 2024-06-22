#include<bits/stdc++.h>

void fucntion(int n){
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cout << "*";
        }
            std::cout << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    fucntion(n);
}