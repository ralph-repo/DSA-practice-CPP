// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void right_view(struct Node* root){
    if(root==NULL)
        return;
        
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int  n=0;
    while(q.empty()==0){
        Node* temp1=q.front();
        q.pop();
        if(temp1!=NULL){
            Node* temp2=q.front();
            if(temp2==NULL){
                cout<<temp1->data<<"\t";
            }
            // cout<<temp1->data<<"\t";
            if(temp1->left!=NULL){
                q.push(temp1->left);
            }
            if(temp1->right!=NULL){
                q.push(temp1->right);
            }
        }
        else if(q.empty()==0 && temp1==NULL){
            q.push(NULL);
            n++;
        }
    }
}
void left_view(struct Node* root){
    if(root==NULL)
        return;
        
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int  n=0,flag=1;
    while(q.empty()==0){
        Node* temp1=q.front();
        q.pop();
        if(temp1!=NULL){
            // cout<<temp1->data<<"\t";
            if(flag==1){
                cout<<temp1->data<<"\t";
                flag=0;
            }
            if(temp1->left!=NULL){
                q.push(temp1->left);
            }
            if(temp1->right!=NULL){
                q.push(temp1->right);
            }
        }
        else if(q.empty()==0 && temp1==NULL){
            q.push(NULL);
            flag=1;
            n++;
        }
    }
}

int main() {
    // Write C++ code here
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->left->right->right=new Node(8);
    right_view(root);
    cout<<"\n";
    left_view(root);
    return 0;

}