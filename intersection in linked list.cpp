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
void ll1(node* &head1){
    for(int i=0;i<9;i++){
       node* n=new node(i);
       if(head1==NULL){
           head1=n;
           continue;
       }
       node* temp=head1;
       while(temp->next!=NULL){
           temp=temp->next;
       }
       temp->next=n;
    }
    
}
void ll2(node* &head2){
    for(int i=15;i<17;i++){
       node* n=new node(i);
       if(head2==NULL){
           head2=n;
           continue;
       }
       node* temp2=head2;
       while(temp2->next!=NULL){
           temp2=temp2->next;
       }
       temp2->next=n;
    }
}
void intersect(node* head1, node* head2){
    node* temp1=head1;
    int count=0;
       while(temp1->next!=NULL && count!=7){
           temp1=temp1->next;
           count++;
       }
    node* temp2=head2;
       while(temp2->next!=NULL){
           temp2=temp2->next;
       }
    temp2->next=temp1;
}
int length(node* head){
    node* temp=head;
    int count=1;
       while(temp->next!=NULL){
           temp=temp->next;
           count++;
       }
    return count;
}
int checkInt(node* head1, node* head2){
    int l1=length(head1);
    int l2=length(head2);

    node* ptr1;
    node* ptr2;
    int d=0;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){
        ptr1=ptr1->next;
        d--;
    }

    while(ptr1->next!=NULL && ptr2->next!=NULL){
        if(ptr1->data==ptr2->data){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}

void display(node* head){
    node* temp=head;
       while(temp->next!=NULL){
           cout<<temp->data<<" ";
           temp=temp->next;
       }
       cout<<temp->data;
}

int main()
{
    node* head1=NULL;
    node* head2=NULL;
    ll1(head1);
    display(head1);
    cout<<endl;
    ll2(head2);
    intersect(head1, head2);
    display(head2);
    cout<<endl;
    int intersectData=checkInt(head1,head2);
    cout<<intersectData<<endl;
    return 0;
}
