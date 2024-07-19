// OS<E PCMPILE NAHI HORAHA, CHECK ONLINE COMPILERS

#include <iostream>
#include <map>

int main() {
    // YEH EK TARAH SE MATH KE FUNCTIONS JAISA HE, KI EK INPUT KE MULTIPLE OUTPUTS NI HOSAKTE BUT MULTIPLE INPUTS KE EK OUTPUT HOSAKTA HE!
    
    std::map<int, std::string> m;
    m[1] = "ishaan";
    m[11] = "gurgaon";
    m[14] = "wolf";

    m.insert( {5, "bheem"});
    // or m[5] = "bheem";

    // and the output will be 1 5 11 14, hamesha ordered hoga!

    for (auto i : m) {
        std::cout << i.first << std::endl;
    }
    
    std::cout << "count of 11 is: " << m.count(11) << std::endl;
    std::cout << "count of 14 is: " << m.count(14) << std::endl;
    std::cout << "count of -14 is: " << m.count(-14) << std::endl;

    for(auto i:m) {
    std::cout<<i.first<<" "<<i.second<<std::endl;
    }
    // i.first se number aaat and i.seocnd se string etc.

    return 0;
}