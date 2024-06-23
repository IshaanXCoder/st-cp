#include <bits/stdc++.h>

int main(){
    int arr[3];
    // named as 0,1,2!  
    // it could have been float arr[n] or any other datatype, but datatype will remian constant for all the elemtns in any array!
    std:: cin >> arr[0] >> arr[1] >> arr[2];

    arr[2]+=10;

    // add 10 to the value ofo arr[3]
    std:: cout << arr[2];


    std:: string s;
    std:: cin >> s;
    // std:: cout << s[1];
    int len = s.size();
    std:: cout << s[len-2];
    // Every character in a string is stored as an index, and the first index is 0th index.

    return 0;
}