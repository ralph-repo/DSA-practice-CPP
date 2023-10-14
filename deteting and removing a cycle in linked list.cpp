/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
class node{
    public: 
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};
void ll(node* &head){
    for(int i=0;i<10;i++){
        node* n=new node(i);
        if(head==NULL){
            head=n;
            continue;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}
void makeCycle(node* head, int k){
    node* temp=head;
    int count=0;
    while(k!=count){
        temp=temp->next;
        count++;
    }
    node* cyc=head;
    while(cyc->next!=NULL){
        cyc=cyc->next;
    }
    cyc->next=temp;
}
bool detect(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
void removeCycle(node* head){
    node* slow=head;
    node* fast=head;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            break;
        }
    }
    cout<<endl;
    fast=head;
    while(slow->next != fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
void display(node* head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;
    node* head = NULL;
    ll(head);
    display(head);
    cout<<"before makecycle "<<detect(head)<<endl;
    makeCycle(head,3);
    bool check=detect(head);
    cout<<"after makecycle "<<check<<endl;
    if(check){
        removeCycle(head);
    }
    display(head);
    return 0;
}
