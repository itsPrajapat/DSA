// Problem : For given root nodes of 2 binary search trees, print if the BSTs are identical or not. Identical BSTs are structurally identical and have equal values for the nodes in the structure 

#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    // constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


// Check BSTs
bool isBST(Node* root1, Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL || root2==NULL){
        return false;
    }
    else{
        bool cond1 = root1->data == root2->data;
        bool cond2 = isBST(root1->left, root2->left);
        bool cond3 = isBST(root1->right, root2->right);

        if(cond1 && cond2 && cond3){
            return true;
        }
        return false;
    }
}


int main(){

    /*     BST 1

                2
               / \
              1   3   
    */
   Node* root1 = new Node(2);
   root1->left = new Node(1);
   root1->right = new Node(3);


    /*     BST 2

                2
               / \
              1   4   
    */

   Node* root2 = new Node(2);
   root1->left = new Node(1);
   root1->right = new Node(4);


    if(isBST(root1, root1)){
        cout<<"BSTs are identical"<<endl;
    }else{
        cout<<"BSTs are not identical"<<endl;
    }


    if(isBST(root1, root2)){
        cout<<"BSTs are identical"<<endl;
    }else{
        cout<<"BSTs are not identical"<<endl;
    }

    return 0;
}