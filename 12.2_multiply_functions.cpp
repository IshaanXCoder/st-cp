#include<bits/stdc++.h>

float multiply(float a, float b){
    float prod = a*b;
    return prod;
}
int main(){
    float a,b;
    std:: cin >> a >> b;
    std::cout << "product is : " << multiply(a,b);
    return 0;
}