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
void insertAtTail(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
node* merge(node* head1, node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummyNode=new node(-1);
    node* ptr3=dummyNode;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data>ptr2->data){
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        else{
            ptr3->next=ptr1;
            ptr1=ptr1->next;
        }
        ptr3=ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummyNode->next;
}
node* mergeRecursive(node* head1, node* head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result;
    if(head1->data>head2->data){
        result=head2;
        result->next=mergeRecursive(head1,head2->next);
    }
    else{
        result=head1;
        result->next=mergeRecursive(head1->next,head2);
    }
    return result;
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
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,7);
    //insertAtTail(head1,9);
    display(head1);
    insertAtTail(head2,2);
    insertAtTail(head2,3);
    insertAtTail(head2,6);
    //insertAtTail(head2,7);
    display(head2);
    //node* newHead=merge(head1,head2);
    node* newHead=mergeRecursive(head1,head2);
    display(newHead);
    return 0;
}
