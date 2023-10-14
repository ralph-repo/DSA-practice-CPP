/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;
string keyword[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string str, string ans){
    if(str.empty()){
        cout<<ans<<endl;
        return;
    }
    char ch=str[0];
    string code = keyword[ch-'0'];
    string ros=str.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros, ans+code[i]);
    }
}

int main()
{
    
    string s;
    getline(cin,s);
    keypad(s, "");
    return 0;
}
