#include<bits/stdc++.h>

int myFun(int myArr[], int n){
    
    int largest = myArr[0];
    for(int m=0;m<n;m++){
        if(myArr[m] > largest){
        largest=myArr[m];
        }
    }
        return largest;


}

int main(){
    int n;
    std::cin>>n;
    int myArr[n];
    for(int i=0;i<n;i++){
        std::cin>>myArr[i];
    }

    int largest = myFun(myArr, n);
    std::cout << "Largest element: " << largest << std::endl;

    return 0;
}