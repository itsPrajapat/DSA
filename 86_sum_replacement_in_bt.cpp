// Sum Replacement --> Replace the value of each node with the sum of all subtree nodes and itself

#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    // constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Sum Replacement
void sumReplace(Node* root){  // Time complexity = O(n)  where n = no. of node in binary tree

    // base case
    if(root == NULL){
        return;
    }

    sumReplace(root->left);
    sumReplace(root->right);

    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
}

// Preorder Traversal
void PreOrder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

 /*   
                1
              /   \
             2     3
            / \   / \
           4   5 6   7
*/


    // original tree
    PreOrder(root);
    cout<<endl;

    // tree after sum replacement
    sumReplace(root);
    PreOrder(root);
    cout<<endl;

    
    return 0;
}