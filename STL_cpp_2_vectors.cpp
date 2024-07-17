#include <bits/stdc++.h>
#include<vector>

int main(){
    std::vector<int> v;
    std::cout << "capacity of vector is " << v.capacity()<< std::endl;
    v.push_back(1);
    std::cout << "capacity of vector is " << v.capacity() << std::endl;
    std::cout << "size of vector is " << v.size() << std::endl;

    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    std::cout << "capacity of vector is " << v.capacity() << std::endl;
    std::cout << "size of vector is " << v.size() << std::endl;

    std::cout<< "element at seocond = " << v.at(0) << std::endl;
    std::cout<< "element at seocond = " << v.at(1) << std::endl;
    std::cout<< "element at seocond = " << v.at(2) << std::endl;
    std::cout<< "element at seocond = " << v.at(3) << std::endl;
 


//  TO PRINT ANY VECTOR :-
    std::cout << "vector right now is : " << std::endl;
    for(int i:v){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    v.pop_back();
    // this will remove the last element oft the vector!
// NOW TO CHECK THIS< lets print entire vector again
    std::cout << "vector right now is : " << std::endl;
    for(int i:v){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;


    v.clear();
    std::cout << "vector ka size after clearing is : " << v.size() <<std::endl;
    std::cout << "vector ka capacity after clearing is : " << v.capacity() <<std::endl;

    // HENCE WE CAN SAY THAT AFTER CLEARIGN A VECTOR, THE SIZSE BECOMES 0 WILL CAPACITY IS NOT ZERO!

    std::cout << "vector after clearing is : " << std::endl;
    for(int i:v){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    std::vector<int> newVector(5,1);
    // this means creating a vector of 5 elements which all are 1!

    std::cout << "vector  new is : " << std::endl;
        for(int i:newVector){
            std::cout<<i<<" ";
        }
    

}
