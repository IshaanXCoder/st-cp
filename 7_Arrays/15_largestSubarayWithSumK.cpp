// ++++++++++++++INCOMPLETE++++++++++++++

#include<bits/stdc++.h>

std::vector<int> myVector(int n, int k, int myArr){
    for(int i=0;i<n;i++){
        int counter = 1;
        int sum = myArr[i];
        for(int j=i;j<n;j++){
            sum = sum+ myArr[j]; 
        }
    }
}