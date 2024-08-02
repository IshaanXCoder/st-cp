#include<bits/stdc++.h>

int main(){
    int n;
    std::cin>>n;
    int myArr[n];
    for(int i=0;i<n;i++){
        std::cin>>myArr[i];
    }

    int q;
    std::cin>>q;

    // int Hash[13] = {0};
    std::map<int, int> mpp;
    for(int i=0;i<n;i++){
    mpp[myArr[i]]++;
    }

    std::cout<<mpp[q];

}