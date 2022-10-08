#include<iostream>
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

// Search in BST   Time Complexity --> O(logn)
Node* searchBST(Node* root, int key){  
    if(root==NULL){
        return NULL;
    }

    if(root->data == key){
        return root;
    }

    // if key is present in left subtree 
    if(key < root->data){
        return searchBST(root->left, key);
    }

    // key is present in right subtree
    return searchBST(root->right, key);
}


// Inorder Successor
Node* inorderSucc(Node* root){
    Node* curr = root;
    while(!curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;
}


// Deletion in BST
Node* deleteInBST(Node* root, int key){

    if(key < root->data){
        root->left = deleteInBST(root->left, key);
    }
    else if(key > root->data){
        root->right = deleteInBST(root->right, key);
    }
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteInBST(root->right, temp->data);
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

    root = buildBST(root, 4);
    buildBST(root, 2);
    buildBST(root, 5);
    buildBST(root, 1);
    buildBST(root, 3);
    buildBST(root, 6);

    /*   Binary Search Tree

                4
               / \
              2   5
             / \   \
            1  3    6
    */

    if(searchBST(root, 1)==NULL){
        cout<<"Key doesn't exist"<<endl; 
    }else{
        cout<<"Key exist"<<endl;
    }

    inorderPrint(root); cout<<endl;
    root = deleteInBST(root, 5);
    inorderPrint(root);

    return 0;
}