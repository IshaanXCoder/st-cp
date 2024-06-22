#include <bits/stdc++.h>

void fx(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            std::cout << "*";

        }
        std::cout << std::endl;
    }
}

int main(){
    int n;
    std::cin >> n;
    fx(n);
    return 0;
}