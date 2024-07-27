#include<bits/stdc++.h>

void shiftByTOO(int n,int d, int myArr){
    for(int m=0;m<n;m++){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = myArr[i];
    }
    for(int k = d; k<n;k++){
        arr[k]=arr[k-d];
    }
    for(int l=0;l<d; l++){
        temp[l] = myArr.push_back();
    }

    }
}

int main(){

    int n;
    int d;
    std::cin>>n;
    std::cin>>d;
    int myArr[n];
    for(int i=0;i<n;i++){
        std::cin>>myArr[i];
    int newArr = shiftByTOO(n, d, myArr);
        for(int z=0;z<n;z++){
            std::cout>>newArr[z]>> " ";
        }
    }

}