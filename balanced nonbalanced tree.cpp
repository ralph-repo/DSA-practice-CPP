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
int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    return max(lheight,rheight)+1;
}
bool isBalance(Node* root){
    if(root==NULL){
        return true;
    }
    if(!isBalance(root->left)){
        return false;
    }
    if(!isBalance(root->right)){
        return false;
    }
    int lh=calcHeight(root->left);
    int rh=calcHeight(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }else{
        return false;
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
    Node* root1=new Node(1);
    root1->left=new Node(2);
    root1->left->left=new Node(3);
    // root->left->left->left=new Node(8);
    // root->left->left->left->left=new Node(9);
    if(isBalance(root1)){
        cout<<"balanced tree"<<"\n";
    }else{
        cout<<"non-balanced tree"<<"\n";
    }
    return 0;

}