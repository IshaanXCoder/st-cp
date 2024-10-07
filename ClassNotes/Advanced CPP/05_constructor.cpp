//special method invoked automaticallya t time of object creation!!
//toh jaise abhi hamne ek employee class banaya and neeche jaise employee1(e1) banaya, toh ussi time us e1 ko hamara compiler call krega (jo hame nahi dikhga)

//constructor should have same name as class
//constructor doesnt have a return type

////////CONSTRUCTOR IS ALWAYS DEFINED AS PUBLIC!!!!!!!!!!!!!!!!

//MEMORY ALLOCATION OCCURS WHEN CONSTRUCTOR IS CALLED


#include <bits/stdc++.h>
using namespace std;

class employee {
  public: 
    int id; 
    string jobtitle; 
    string gender; 

  private:
    double salary; 


  public: 
  //makign a construcot named employee(same as the classs)
  employee(){
    cout<<"hey iam constructor";

    //iske andar jo bhilikhoge woh sabke liye by eefualt aajayga
    gender = "female"; //toh isse bydefault saare teachers femaele hongi
  }
//setter
    void setSalary(double s){
        salary = s; 
    }

    //getter = public functions which return private values

    double getSalary(){
        return salary;
    }
}; 


int main(){

  //yaha pe by default ek constructor call hogi, but agar hamne upar wala likha he th woh priority pe rahega and default ki jagah hamare waale ki izzat hogi and uske acc kaam hoga!
  employee e1;
  e1.id = 3456;
  e1.setSalary(652.62);
  e1.jobtitle = "teaceher";

  cout<<e1.gender;
}