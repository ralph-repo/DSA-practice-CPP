/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
using namespace std;
int prec(char c){
    if(c=='+' || c=='-')
        return 1;
    else if(c=='/' || c=='*')
        return 2;
    else if(c=='^')
        return 3;
    else
        return -1;
}
string infToPost(string s){
    stack<char> st;
    string res="";
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                res+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && (prec(st.top())>prec(s[i]))){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
string reverse(string s){
    string res="";
    int i=0;
    while(s[i]!='\0'){
        if(s[s.length()-1-i]==')')
            res+='(';
        else if(s[s.length()-1-i]=='(')
            res+=')';
        else
            res+=s[s.length()-1-i];
        i++;
    }
    return res;
}
int main()
{
    string s="(a-b/c)*(a/k-l)";
    string r=reverse(s);
    cout<<reverse(infToPost(r));
    
    return 0;
}
