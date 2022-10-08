// flatten a binary tree

#include<iostream>
#include<stack>
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


void flatten(Node* root){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return;
    }

    if(root->left!=NULL){
        flatten(root->left);

        Node* temp = root->right;
        root->right = root->left;
        root->left = NULL;

        Node* t = root->right;
        while(t->right!=NULL){
            t = t->right;
        }

        t->right = temp;
    }

    flatten(root->right);
}


// inorder traversal
void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
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

    flatten(root);
    inorderTraversal(root);
    
    return 0;
}