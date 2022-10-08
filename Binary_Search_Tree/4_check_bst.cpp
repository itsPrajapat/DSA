// Check whether a given BT is BST or NOT
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

bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if(root==NULL){
        return true;
    }

    if(min!=NULL && min->data >= root->data){
        return false;
    }
    if(max!=NULL && max->data <= root->data){
        return false;
    }

    bool left   = isBST(root->left, min, root);
    bool right  = isBST(root->right, root, max);

    return left and right;
}


int main(){

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    /*     Tree 1

                1
               / \
              2   3   
    */

    if(isBST(root1, NULL, NULL)){
        cout<<"Valid BST"<<endl;
    }else{
        cout<<"Invalid BST"<<endl;
    }

    Node* root2 = new Node(5);
    root1->left = new Node(4);
    root1->right = new Node(8);

    /*     Tree 1

                5
               / \
              4   8   
    */

    if(isBST(root2, NULL, NULL)){
        cout<<"Valid BST"<<endl;
    }else{
        cout<<"Invalid BST"<<endl;
    }

    
    return 0;
}