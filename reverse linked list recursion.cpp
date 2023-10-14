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
    for(int i=0;i<5;i++){
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
// node* reversell(node* &head){
//     node* prev=NULL;
//     node* curr=head;
//     node* foll;
//     while(curr->next!=NULL){  //while(curr!=NULL) loop for n times and return 
//             foll=curr->next; //the address of prev in newhead
//             curr->next=prev;
//             prev=curr;
//             curr=foll;
//         }
//     curr->next=prev;
//     return curr;
// }
node* reverseRecursive(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    node* newhead=reverseRecursive(head);
    display(newhead);
    return 0;
}
