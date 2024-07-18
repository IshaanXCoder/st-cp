#include <bits/stdc++.h>

int main(){
    std::vector<int> v;
    v.push_back(2);
    v.push_back(56);
    v.push_back(743);
    v.push_back(24);
    v.push_back(2);
    v.push_back(3);

    std::cout << "Vector right now is: " << std::endl;
    for(int i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    v.erase(v.begin() );

    std::cout << "Vector right now is: " << std::endl;
    for(int i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Erase the element at index 3

    v.erase(v.begin()+3 );

    std::cout << "Vector right now is: " << std::endl;
    for(int i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    v.push_back(21);
    v.push_back(20);
    v.push_back(39);

    v.erase(v.begin()+1, v.begin()+3); 
    // it removes all elemtns from [start,end)


    std::cout << "Vector right now is: " << std::endl;
    for(int i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;



    v.erase(v.begin()+1, v.begin()+4);

    std::cout << "Vector right now is: " << std::endl;
    for(int i : v){
        std::cout << i << " ";
    }
    std::cout << std::endl;


    return 0;

}