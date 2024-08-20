// smallest index such that arr[index]>n

myFun(n, target, myArr[n]){
     int low = 0;
    int high = n - 1;
    int ans = -1;  // Initialize ans to -1 to indicate no suitable value found

}


#include<bits/stdc++.h>
int main(){
    int n;
    int x;
    
    std::cout << "Enter x : ";
    std::cin >> x;

    std::cout << "Enter the number of elements : ";
    std::cin >> n;
    
    std::vector<int> myArr(n);
    std::cout << "Enter the elements : ";
    for(int i = 0; i < n; i++) {
        std::cin >> myArr[i];
    }

    std::cout << myFun(n, x, myArr);
    return 0;
}