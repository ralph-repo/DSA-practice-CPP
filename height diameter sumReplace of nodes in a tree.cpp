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
int diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);
    int currdia=lheight+rheight+1;
    
    int ldiameter=diameter(root->left);
    int rdiameter=diameter(root->right);
    
    return max(currdia,max(ldiameter,rdiameter));
}
void sumReplace(Node* root){
    if(root==NULL){
        return;
    }
    sumReplace(root->left);
    sumReplace(root->right);
    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
    
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);
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
    // root->left->left->left=new Node(8);
    // root->left->left->left->left=new Node(9);
    cout<<"height of tree is "<<calcHeight(root)<<endl;
    cout<<"diameter of tree is "<<diameter(root)<<endl;
    inorder(root);
    sumReplace(root);
    cout<<"\n";
    inorder(root);
    return 0;

}