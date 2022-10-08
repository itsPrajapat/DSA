// Preorder Traversal  -->  Root              Left Subtree       Right Subtree
// Inorder Traversal   -->  Left Subtree      Root               Right Subtree
// Postorder Traversal -->  Left Subtree      Right Subtree      Root


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

// Preorder Traversal
void PreOrder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}    

// Inorder Traversal
void InOrder(struct Node* root){
    if(root == NULL){
        return;
    }
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

// Postorder Traversal
void PostOrder(struct Node* root){
    if(root == NULL){
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}

int main(){

    struct Node* root = new Node(1);
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

    cout<<"Preorder Traversal: ";
    PreOrder(root); 
    cout<<endl;

    cout<<"Inorder Traversal: ";
    InOrder(root);  
    cout<<endl;

    cout<<"Postorder Traversal: ";
    PostOrder(root);  
    cout<<endl;


    return 0;
}