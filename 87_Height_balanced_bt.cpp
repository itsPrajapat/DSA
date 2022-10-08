// Balanced Height Tree --> For each node, the difference between the heights of the left subtree & right subtree <= 1

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

// height of the binary tree
int calcHeight(Node* root){     

    // base case
    if(root == NULL){
        return 0;
    }
    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);

    return max(lh, rh) + 1;
}


// Check whether the binary tree is balanced or not
bool isBalanced(Node* root){    // Time complexity = O(n*n)  where n = no. of node in binary tree

    // base case
    if(root == NULL){
        return true;
    }

    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }

    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);
    if(abs(lh - rh)<=1){
        return true;
    }
    else{
        return false;
    }
}


// Optimised function --> Check whether the binary tree is balanced or not
bool IsBalance(Node* root, int* height){    // Time complexity = O(n)

    // base case
    if(root == NULL){
        return true;
    }

    int lh, rh = 0;
    if(IsBalance(root->left, &lh) == false){
        return false;
    }
    if(IsBalance(root->right, &rh) == false){
        return false;
    }

    *height = max(lh, rh) + 1;
    if(abs(lh - rh) <= 1){
        return true;
    }else{
        return false;
    }
}


int main(){

    // balanced
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);

 /*   
                1
              /   \
             2     3
            / \   / \
           4   5 6   7
*/


    // NOT balanced
    /*
            1
           /
          2
         /
        3 
    */

    Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(3);


    // Height Balanced Tree
    if(isBalanced(root1)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"UnBalanced Tree"<<endl;
    }


    if(isBalanced(root2)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"UnBalanced Tree"<<endl;
    }cout<<endl;


    // Optimised way
    int height = 0;
    if(IsBalance(root1, &height)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"UnBalanced Tree"<<endl;
    }


    if(IsBalance(root2, &height)){
        cout<<"Balanced Tree"<<endl;
    }else{
        cout<<"UnBalanced Tree"<<endl;
    }

    
    return 0;
}