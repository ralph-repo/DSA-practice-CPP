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
int search(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    
    return -1;
}
Node* buildtree(int postorder[],int inorder[],int start,int end){
    static int idx=4;
    if(start>end){
        return NULL;
    }
    int curr=postorder[idx];
    idx--;
    Node* temp=new Node(curr);
    if(start==end){
        return temp;
    }
    int pos=search(inorder,start,end,curr);
    temp->right=buildtree(postorder,inorder,pos+1,end);
    temp->left=buildtree(postorder,inorder,start,pos-1);
    return temp;
}
void inorderPrint(struct Node* root){
    if(root==NULL)
        return;
    inorderPrint(root->left);
    cout<<root->data<<"\t";
    inorderPrint(root->right);
}
int main() {
    // Write C++ code here
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(postorder,inorder,0,4);
    inorderPrint(root);
    return 0;
}