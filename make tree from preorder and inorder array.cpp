// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int preorder[], int inorder[],int curr, int start, int end){
    for(int i=start;i<=end;i++){
        if(curr==inorder[i]){
            return i;
        }
    }
    return -1;
}
Node* buildtree(int preorder[],int inorder[], int start,int end){
    static int idx=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* temp=new Node(curr);
    if(start==end){
        return temp;
    }
    int pos=search(preorder, inorder, curr, start, end);
    temp->left=buildtree(preorder, inorder, start, pos-1);
    temp->right=buildtree(preorder, inorder, pos+1,end);
    
    return temp;
}
void inorder_print(struct Node* root){
    if(root==NULL)
        return;
        
    inorder_print(root->left);
    cout<<root->data<<"\t";
    inorder_print(root->right);
}

int main() {
    // Write C++ code here
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(preorder,inorder,0,4);
    inorder_print(root);
    
    return 0;
}