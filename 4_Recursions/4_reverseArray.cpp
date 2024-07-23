#include<bits/stdc++.h>

void myFunc(int l, int r){
    if(l>=r){
        return;
    }
    swap(myArray[l],myArray[r]);
    myFunc(l+1,r-1);

}
int main(){
    const int SIZE = 5; // Size of the array
    int myArray[SIZE] = {1, 2, 5, 4, 3};
    myFunc(0,SIZE-1);
}