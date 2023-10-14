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
node* reversek(node* head,int k){
    node* prev=NULL;
    node* curr=head;
    node* foll;
    int count=0;
    while(curr!=NULL && count<k){  
            foll=curr->next; 
            curr->next=prev;
            prev=curr;
            curr=foll;
            count++;
        }
    if(foll!=NULL){
    head->next=reversek(foll,k);
    }
    return prev;
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
    node* newhead=reversek(head,3);
    display(newhead);
    return 0;
}
