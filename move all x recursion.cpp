/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

string moveallx(string str){
    if(str.empty())
        return "";
    char ch=str[0];
    string ans=moveallx(str.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    else{
        return ch+ans;
    }
}

int main()
{
    string s;
    getline(cin,s);
    cout<<moveallx(s);
    return 0;
}
