#include <bits/stdc++.h>
int main(){
    int myArr[6] = {1, 2, 5, 4, 2, 8};
    int temp = myArr[5]; // Save the last element

    // Shift elements to the right
    for(int i = 5; i > 0; i--){
        myArr[i] = myArr[i - 1];
    }

    // Place temp at the start
    myArr[0] = temp;

    // Print the modified array
    for(int m = 0; m < 6; m++){
        std::cout << myArr[m] << " ";
    }
    return 0;
}