#include<bits/stdc++.h>
int main(){
    int a;
    std::cout<<"Write the number : ";
    std::cin>>a;
    std::vector<int> myArr;
    std::string b;
    for(int i=a;a>0;--i){

        myArr.push_back(a%2);
        a=a/2;
    }

        for (int i = myArr.size() - 1; i >= 0; --i) {
        std::cout << myArr[i];
    }

}

