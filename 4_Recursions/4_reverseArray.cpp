#include<bits/stdc++.h>

void myFunc(int l, int r){
    const int myArray;
    if(l>=r){
        return;
    }
    std::swap(myArray[l],myArray[r]);
    myFunc(l+1,r-1);

}
int main(){
    int l,r;
    const int myArray = [1, 2, 3, 4, 5];
    std::cout<<myFunc(0,4);
}