#include<bits/stdc++.h>

int main(){

    // declaringhte array!!!!
    int n;
    std::cout<<"Enter the num of elements : ";
    std::cin>>n;
    std::cout<<"Enter the elements : ";
    int myArr[n];
    for(int i=0;i<n;i++){
        std::cin>>myArr[i];
        std::cin>>myArr[i];
    }

    for(int i=0;i<n;i++){
        int count = 0 ;
        for(int j=0;j<n;j++){
            {
                if(myArr[i]==myArr[j]){
                    count++;
                }
            }
            

        }
        if (count>n/2){

                std::cout<<"majority element in the array is : " << myArr[i];
                break;
            }

    }



    

}