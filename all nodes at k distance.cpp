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
void print_subtree_nodes(Node* root, int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<"\t";
        return;
    }
    print_subtree_nodes(root->left,k-1);
    print_subtree_nodes(root->right,k-1);
}
int print_k_nodes(Node* root, Node* target, int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        print_subtree_nodes(root,k);
        return 0;
    }
    int dl=print_k_nodes(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<"\t";
        } else{
            print_subtree_nodes(root->right, k-dl-2);
        }
        return 1+dl;
    }
    int dr=print_k_nodes(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<"\t";
        } else{
            print_subtree_nodes(root->left, k-dr-2);
        }
        return 1+dr;
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
    root->left->right->left=new Node(9);
    root->right->right->left=new Node(10);
    root->right->right->right=new Node(11);
    print_k_nodes(root,root->right->left,2);
    return 0;
            //         1
            //    2         3
            // 4    5     6    7
            //     9  8      10  11
            
}