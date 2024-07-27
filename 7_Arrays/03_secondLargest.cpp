#include<bits/stdc++.h>


void myFun(int myArr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int myMin = i;
        for (int j = i + 1; j < n; j++) {
            if (myArr[j] < myArr[myMin]) {
                myMin = j;
            }
        }

        int temp = myArr[myMin];
        myArr[myMin] = myArr[i];
        myArr[i] = temp;

   }
}

int main() {
    int n;

    std::cin >> n;
    int myArr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }
    myFun(myArr, n);

    std::cout <<"second largest is : "<< myArr[n-2];
        
    return 0;
}