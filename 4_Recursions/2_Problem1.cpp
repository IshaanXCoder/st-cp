#include<bits/stdc++.h>

void func(int i,int n){
    if(i>n){
        return;
    }
    else {
        std::cout<<"Ishaan"<<std::endl;
    }
    func(i+1,n);
}

int main(){
    int n;
    std::cin>>n;
    func(1,n);

}