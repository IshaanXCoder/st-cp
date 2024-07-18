#include<bits/stdc++.h>

// set ki uniqueness is ki woh ek number ko jitni  baar daalne pe bhi bas ek he baar lega

int main(){

    // pushback wala scene nahi he ab, insert krna hota he!
    std::set<int>mySet;
    mySet.insert(5);
    mySet.insert(5);
    mySet.insert(4);
    mySet.insert(5);

    // Print the contents of the set
    std::cout << "Elements in mySet: ";
    for (std::set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;



}