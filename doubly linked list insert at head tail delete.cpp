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
    node* prev;
    
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    
    head=n;
}
void insertAtTail(node* &head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteAtHead(node* &head){
    node* toDel=head;
    head=head->next;
    head->prev=NULL;
    delete toDel;
}
void deletion(node* &head, int k){
    if(k==1){
        deleteAtHead(head);
        return;
    }
    int count=1;
    node* temp=head;
    while(temp!=NULL && count!=k){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next != NULL){
    temp->next->prev=temp->prev;
    }
    delete temp;
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
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,6);
    insertAtHead(head,5);
    display(head);
    deletion(head,3);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}
