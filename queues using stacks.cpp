// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

class queue{
  stack<int> s1;
  stack<int> s2;
  public:
  void enqueue(int val){
      s1.push(val);
  }
  void dequeue(){
      if(s1.empty() && s2.empty()){
          cout<<"already empty"<<endl;
          return ;
      }
      if(s2.empty()){
        while(!s1.empty()){
              s2.push(s1.top());
              s1.pop();
        }
      }
      //int topval=s2.top();
      s2.pop();
      //return topval;
  }
  int peek(){
      if(s1.empty() && s2.empty()){
          cout<<"already empty"<<endl;
          return -1;
      }
      if(s2.empty()){
        while(!s1.empty()){
              s2.push(s1.top());
              s1.pop();
        }
      }
      int topval=s2.top();
      return topval;
  }
  bool empty(){
      if(s1.empty() && s2.empty()){
          return true;
      }
      return false;
  }
};
int main() {
    // Write C++ code here
    std::cout << "Hello Queues!"<<endl;
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.empty()<<endl;
    q.dequeue();
    return 0;
}