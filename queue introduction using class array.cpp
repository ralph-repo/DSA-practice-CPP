/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stack>
using namespace std;
#define n 20
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }
    
    void push(int val){
        if(back==n-1){
            cout<<"queue is filled"<<endl;
            return;
        }
        back++;
        arr[back]=val;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1 || front>back){
            cout<<"queue already empty"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"queue already empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
};
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    q.pop();
    return 0;
}
