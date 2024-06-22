#include <bits/stdc++.h>

int max(int a, int b){
    if(a>=b){
        return a;
    }
    else if(a<b){
        return b;
    }

}

int main(){

    int a,b;
    std::cin >> a >> b;
    std::cout << max(a,b) << " is maximum!";
    return 0;
}