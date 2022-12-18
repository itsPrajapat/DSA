#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(struct Node* root, int val){
    struct Node* nodeToInsert = new Node(val);

    // base case
    if(root==NULL){
        return nodeToInsert;
    }

    if(val<root->data){
       root->left =  buildBST(root->left, val);
    }
    if(val>root->data){
        root->right =  buildBST(root->right, val);
    }

    return root;
}

void inorderPrint(struct Node* root){
    // base case
    if(root==NULL){
        return;
    }

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){

    struct Node* root = new Node(5);
    buildBST(root, 4);
    buildBST(root, 3);
    buildBST(root, 2);
    buildBST(root, 1);

    // inorder Print
    inorderPrint(root);
    
    return 0;
}