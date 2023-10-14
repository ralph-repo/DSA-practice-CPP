/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
#include <string>

using namespace std;
void reverseSentence(string s){
    stack<string> st;
    int i=0,j=0;
    while(i<s.length()){
        
        string word;
        while(s[j]!=' ' && s.length()!=j){
            word=word+s[j];
            j++;
        }
        st.push(word);
        i=j;
        j=i+1;
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    cout<<"Hello Stacks"<<endl;
    string s="how, are you doing?";
    reverseSentence(s);
    return 0;
}
