// BST = Binary Search Tree
// 1. The left subtree of a node contains only nodes with keys lesser than the node's key.
// 2. The right subtree of a node contains only nodes with keys greater than the node's key.
// 3. The left and right subtree each must also be a binary search tree. There must be no duplicate nodes. 


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    // constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* buildBST(Node* root, int val){

    Node* newNode = new Node(val);

    // base case
    if(root==NULL){
        return newNode;
    }

    if(val<root->data){
        root->left = buildBST(root->left, val);
    }else{
        root->right = buildBST(root->right, val);
    }

    return root;
}


// inorder print
void inorderPrint(Node* root){
    if(root==NULL){
        return;
    }

    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){

    Node* root = NULL;

    root = buildBST(root, 5);
    buildBST(root, 1);
    buildBST(root, 3);
    buildBST(root, 4);
    buildBST(root, 2);
    buildBST(root, 7);


    // inorder Print of BST
    inorderPrint(root);

// NOTE :- Inorder print of BST always gives the sorted array
    
    return 0;
}