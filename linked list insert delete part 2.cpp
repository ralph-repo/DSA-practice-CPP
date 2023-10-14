// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node*prev;
        
        node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
        
        ~node(){
        	int value = this->data;
            if(this->next != NULL && this->prev != NULL){
            	delete prev; delete next;
            	cout<<"the value deleted inside 'if' is "<<value<<endl;
            }
            cout<<"the value deleted is "<<value<<endl;
        }
        
};

void insertAtHead(node* &head, int data){
    node* newNode = new node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(node* &head, node* &tail, int data){
    node* newNode = new node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(node* &head, node* &tail, int data, int pos){
    if(pos==1){
        insertAtHead(head, data);
        return;
    }
    else{
        int cnt=1;
        node* temp = head;
        while(cnt<pos-1){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
            insertAtTail(head, tail, data);
            return;
        }
        node* newNode = new node(data);
        newNode->prev = temp;
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
}

void deleteNode(node* &head, node* &tail, int pos){
	if(pos==1){
    	node* temp=head;
    	head = temp->next;
    	head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else{
    	node* temp = head;
        int cnt = 1;
        while(cnt<pos){
            temp=temp->next;
            cnt++;
        }
        if(temp->next==NULL){
        	temp->prev->next = NULL;
            tail = temp->prev;
            temp->prev = NULL;
            delete temp;
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
}

void print(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    delete temp;
}

int main() {
    // Write C++ code here
    cout << "Hello doubly linked list!"<<endl;
    node* head = new node(7);
    node* tail = head;
    cout << head->prev << head->data << head->next <<endl;
    insertAtHead(head, 9);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    insertAtTail(head, tail, 11);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    insertAtPosition(head, tail, 15, 3);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    insertAtPosition(head, tail, 19, 1);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    insertAtPosition(head, tail, 21, 6);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    insertAtPosition(head, tail, 23, 4);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    deleteNode(head, tail, 4);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    deleteNode(head, tail, 1);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    deleteNode(head, tail, 5);
    print(head);
    cout<<head->data<<"  "<<tail->data<<endl;
    return 0;
}