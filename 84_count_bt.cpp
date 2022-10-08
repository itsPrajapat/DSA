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

// Count all the nodes in a Binary Tree
int countNodes(Node* root){

    // base case
    if(root==NULL){
        return 0;
    }

    return countNodes(root->left) + countNodes(root->right) + 1;
} 


// Sum of all the nodes in a Binary Tree
int sumNodes(Node* root){

    // base case
    if(root==NULL){
        return 0;
    }

    return sumNodes(root->left) + sumNodes(root->right) + root->data;
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

    // count of nodes
    cout<<"Total no. of nodes in the binary tree: "<<countNodes(root)<<endl;     //   7

    // Sum of nodes
    cout<<"Sum of all the nodes in the binary tree: "<<sumNodes(root)<<endl;     // 28

    
    return 0;
}