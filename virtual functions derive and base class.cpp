/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class base{
    public:
    virtual void func(){
        cout<<"base class func";
    }
    void display(){
        cout<<"base class function";
    }
};
class derived : public base{
    public:
    void func(){
        cout<<"derive class func";
    }
    void display(){
        cout<<"derive class function";
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    baseptr -> func();
}