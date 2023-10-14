// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Stack{
    int n;
    queue<int> q1;
    queue<int> q2;
    public:
    Stack(){
        n=0;
    }
    void push(int val){
        q2.push(val);
        n++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp=q1;
        q1=q2;
        q2=temp;
    }
    void pop(){
        q1.pop();
        n--;
    }
    int top(){
        return q1.front();
    }
    int size(){
        return n;
    }
};
int main() {
    // Write C++ code here
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;
}