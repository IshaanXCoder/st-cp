#include<bits/stdc++.h>

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<=4-i; j++){ 
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}