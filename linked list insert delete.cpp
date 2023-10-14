#include <bits/stdc++.h>
using namespace std;

class LLnode{
    public:
        int data;
        LLnode* next;
    
    LLnode(int data){
        this->data = data;
        this->next = NULL;
    }
    
    ~LLnode(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free with data "<<value<<endl;
    }
};

void insertAtTail(LLnode* &tail, int data){
    LLnode* newNode = new LLnode(data);
    tail->next = newNode;
    tail=newNode;
    // LLnode* newNode = new LLnode(data);
    // LLnode* temp = root;
    // while(temp->next!=NULL){
    //     cout<<temp->data<<"  ";
    //     temp=temp->next;
    // }
    // cout<<endl;
    // temp->next = newNode;
    // temp=temp->next->next;
    // delete temp;
}


void insertAtHead(LLnode* &root, int data){
    LLnode* newNode = new LLnode(data);
    newNode->next = root;
    root = newNode;
    // LLnode* temp = head;
    // head = newNode;
    // head->next = temp;
}

void insertAtPosition(LLnode* &root, LLnode* &tail, int pos, int data){
    if(pos==1){
        insertAtHead(root, data);
        return;
    }
    LLnode* newNode = new LLnode(data);
    int cnt=1;
    LLnode* temp = root;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail, data);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(LLnode* &root, LLnode* &tail, int pos){
    if(pos==1){
        LLnode* temp = root;
        root=root->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        int cnt=1;
        LLnode* curr = root;
        LLnode* prev = NULL;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            tail=prev;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void  print(LLnode* &root){
    LLnode* temp = root;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<endl;
    delete temp;
}

int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    LLnode* root = new LLnode(7);
    LLnode* tail = root;
    cout << root->data <<"  ";
    cout << root->next <<endl;
    insertAtHead(root, 10);
    insertAtHead(root, 5);
    insertAtHead(root, 17);
    insertAtHead(root, 4);
    insertAtTail(tail, 34);
    insertAtTail(tail, 73);
    insertAtPosition(root, tail, 3, 54);
    insertAtPosition(root, tail, 1, 43);
    insertAtTail(tail, 65);
    insertAtPosition(root, tail, 9, 99);
    insertAtTail(tail, 101);
    print(root);
    deleteAtPosition(root, tail, 6);
    deleteAtPosition(root, tail, 1);
    deleteAtPosition(root, tail, 10);
    deleteAtPosition(root, tail, 4);
    print(root);
    insertAtTail(tail, 115);
    print(root);
    cout<<endl;
    LLnode* prev = NULL;
    LLnode* curr = root;
    LLnode* frwd = root->next;
    while(frwd!=NULL){
    	
    	curr->next = prev;
    	cout<<"currN = "<<curr->data<<"  ";
    	prev = curr;
    	cout<<" prev = "<<prev->data<<"  ";
    	curr = frwd;
    	cout<<" curr = "<<curr->data<<"  ";
    	frwd = curr->next;
//    	cout<<" frwd = "<<frwd->data<<"  ";
    	cout<<endl;
	}
	curr->next = prev;
    root = curr;
    print(root);    
    return 0;
}
