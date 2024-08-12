#include<bits/stdc++.h>

int main(){
    std::vector<int> myVect = {1,2,3,4,5,5,6};
    std::vector<int> ::iterator it=myVect.begin();
    // syntaxc to declare a iteraor named it!

    // std::cout<<(*it)<<std::endl;
    //     return 0;
    
    for(it =v.begin();it != myVect.end();++it){
        std::cout<<(*it)<< std::endl;
    }

}