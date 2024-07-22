#include <bits/stdc++.h>

int main() {
     int n;
     std::cin >> n;
     int ogNum = n;
     int sum = 0;  
     while (n > 0) {
        int ld = n % 10;
        sum += (ld * ld * ld);  // Accumulate the sum of cubes of digits
        n = n / 10;
     }

     std::cout << sum << std::endl;
     if(sum==ogNum){
        std::cout<<"Yes, it is an armstrong num";
     }
     else{
        std::cout<<"No, it is not an armstrong num";
     }

    return 0;
}