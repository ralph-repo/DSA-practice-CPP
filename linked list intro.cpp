/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <string>
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

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head=NULL;
    for(int i=0;i<5;i++){
        node* n = new node(i);
        if(head==NULL){
            head=n;
            continue;
        }
        node* temp = head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
        node* temp=head;
        while(temp->next!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<temp->data<<" ";
    // cout<<endl;
    // insertAtTail(head,1);
    // insertAtTail(head,2);
    // insertAtTail(head,3);
    // display(head);
    return 0;
}