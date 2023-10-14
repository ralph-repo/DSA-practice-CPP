/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void subseq(string str, string ans){
    if(str.empty()){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string ros=str.substr(1);
    
    subseq(ros, ans);
    subseq(ros, ans+ch);
}


int main()
{
    string s;
    getline(cin,s);
    subseq(s, "");
    return 0;
}
