#include<bits/stdc++.h>
int main(){
    std::string s;
    std::cin>>s;

// precompute
int hash[26]={0};   
for (int i = 0; i < s.size(); i++)
{
    hash[s[i]-'a']++;
    }


    int q;
    std::cin>>q;
    // q is th enumber of queries
    while(q--){
        char c;
        std::cin>>c;
    }
    return 0;
}