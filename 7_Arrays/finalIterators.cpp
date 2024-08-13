#include<bits/stdc++.h>
int main(){
    std::vector<int> myVect = {1,2,3,4,5,6};
    // for(int value : myVect){
    //     std::cout<<value<<" ";
    // }
    // for(int value : myVect){
    //     value++;
    //     std::cout<<value<<" ";
    // }

    // in order to declare an itertator we often sue the below stuff
    // vector<int> :: iterator it;

    // this can be bypassed and directly used as below case
    for(auto it = v.begin();v!=v.end();++i){
        std::cout<<(*it)<<" ";
    }
}



