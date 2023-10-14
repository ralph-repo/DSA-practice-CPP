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
int countNode(struct Node* root){
    if(root==NULL)
        return 0;
    return countNode(root->left)+countNode(root->right)+1;
}
int sumNode(struct Node* root){
    static int sum=0;
    if(root==NULL)
        return 0;
    
    sum+=root->data;
    sumNode(root->left);
    sumNode(root->right);
    return sum;
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
    cout<<"no. of nodes is "<<countNode(root)<<endl;
    cout<<"sum of nodes is "<<sumNode(root)<<endl;
    return 0;

}