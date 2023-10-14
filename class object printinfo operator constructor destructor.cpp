/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class student{
    string name;
    public:
    
    int age;
    bool gender;
    student(string str, int a, bool b){
        cout<<"parameterised constructor"<<endl;
        name=str;
        age=a;
        gender=b;
    }
    student(student &a){
        cout<<"copy constructor"<<endl;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    student(){
        cout<<"default constructor"<<endl;
    }
    void setName(string s){
        name=s;
    }
    void getName(){
        cout<<name<<endl;
    }
    ~student(){
        
    }
    
    // void printInfo(){
    //     cout<<"Name = ";
    //     cout<<name<<endl;
    //     cout<<"Age = ";
    //     cout<<age<<endl;
    //     cout<<"Gender = ";
    //     cout<<gender<<endl;
    // }
    
    bool operator == (student &a){
        if(name==a.name && age==a.age && gender==a.gender)
            return 1;
        return 0;
    }
};
int main()
{
    // student arr[2];
    // for(int i=0;i<2;i++){
    //     string s;
    //     cout<<"Name = ";
    //     getline(cin,s);
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    //     cin.ignore();
    // }
    // for(int i=0;i<2;i++){
    //     arr[i].printInfo();
    // }
    student a("ritik", 2, 1);
    //a.getName();
    student b;
    student c=a;
    if(c==a){
        cout<<"object is same";
    }
    else{
        cout<<"object is not same";
    }
    return 0;
}
