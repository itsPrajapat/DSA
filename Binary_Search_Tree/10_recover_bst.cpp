// Restore BST 
// Problem : 2 nodes of a BST are swapped. Our task is to restore(correct) the BST 
 
#include<iostream>
#include<climits>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    // Constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


void restoreBST(Node* root){
    Node* first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;
}

int main(){

    /*  

                15
               / \
              20  30
             /   
            5   
    */

   Node* root = new Node(15);
   root->left = new Node(20);
   root->right = new Node(30);
   root->left->left = new Node(5);


    return 0;
}
