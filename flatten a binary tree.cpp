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
void flatten(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flatten(root->left);
        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        
        Node* test=root->right;
        while(test->right!=NULL){
            test=test->right;
        }
        test->right=temp;
    }
    flatten(root->right);
}
void preorder_print(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"\t";
    preorder_print(root->left);
    preorder_print(root->right);
}
void inorder_print(Node* root){
    if(root==NULL){
        return;
    }
    inorder_print(root->left);
    cout<<root->data<<"\t";
    inorder_print(root->right);
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
    root->left->right->left=new Node(9);
    root->right->right->left=new Node(10);
    root->right->right->right=new Node(11);
    preorder_print(root);
    cout<<"\n";
    flatten(root);
    inorder_print(root);
    return 0;
            //         1
            //    2         3
            // 4    5     6    7
            //     9  8      10  11
            
}