/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;
string keyword[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void permutation(string str, string ans){
    if(str.empty()){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<str.length();i++){
        char ch=str[0];
        string ros = str.substr(0,i)+str.substr(i+1);
        
        permutation(ros, ans+ch);
    }
}

int main()
{
    
    string s;
    getline(cin,s);
    permutation(s, "");
    return 0;
}
