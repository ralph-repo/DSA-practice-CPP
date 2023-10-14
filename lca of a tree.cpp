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
bool get_path(Node* root, int key,vector<int> &path){
    if(root==NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(get_path(root->left,key,path) || get_path(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;
}
int LCA(Node* root, int n1, int n2){
    vector<int> path1,path2;
    
    if(!get_path(root,n1,path1) || !get_path(root,n2,path2)){
        return -1;
    }
    int pc;
    for(pc=0;pc<path1.size();pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }
    return path1[pc-1];
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
    cout<<LCA(root,8,4)<<" is the LCA"<<endl;
    return 0;
            //       1
            //    2     3
            // 4    5 6    7
            //        8
            
}