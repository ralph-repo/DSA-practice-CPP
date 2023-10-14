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
    for(int i=1;i<=5;i++){
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
int length(node* head){
    node* temp=head;
    int l=1;
    while(temp->next!=NULL){
        temp=temp->next;
        l++;
    }
    return l;
}
void kappend(node* &head,int k){
    node* newTail;
    node* newHead;
    node* tail=head;
    int len=length(head);
    int count=1;
    while(tail->next!=NULL){
        if(count==len-k){
            newTail=tail;
        }
        if(count==len-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    head=newHead;
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
    cout<<"Hello linked list"<<endl;
    node* head=NULL;
    ll(head);
    display(head);
    kappend(head, 2);
    display(head);
    
    return 0;
}