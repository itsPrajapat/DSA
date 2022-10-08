// Height   ---> It is the depth of the tree's deepest node
// Diameter ---> Number of nodes in the longest path between any two leaves


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
int calcHeight(Node* root){         // Time complexity = O(n)  where n = no. of node in binary tree

    // base case
    if(root == NULL){
        return 0;
    }

    int leftHeight = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}


// Diameter of the binary tree
int calcDiameter(Node* root){       // Time complexity = O(n*n)  where n = no. of node in binary tree

    // base case
    if(root == NULL){
        return 0;
    }

    int leftHeight  = calcHeight(root->left);
    int rightHeight = calcHeight(root->right);
    int currDiameter = leftHeight + rightHeight + 1;

    int leftDiameter  = calcDiameter(root->left);
    int rightDiameter = calcDiameter(root->right);

    return max(currDiameter, max(leftDiameter, rightDiameter));

}


// Optimised version to calculate diameter of the binary tree
int Diameter(Node* root, int* height){  // Time complexity = O(n)  where n = no. of node in binary tree

    // base case
    if(root == NULL){
        *height = 0;
        return 0;
    }

    int lh, rh = 0;
    int lDiameter  = Diameter(root->left, &lh);
    int rDiameter = Diameter(root->right, &rh);

    int currDiameter = lh + rh + 1;
    *height = max(lh, rh) + 1;

    return max(currDiameter, max(lDiameter, rDiameter));

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

    
    cout<<"Height of the binary tree is: "<<calcHeight(root)<<endl;

    cout<<"Diameter of the binary tree: "<<calcDiameter(root)<<endl;

    // Diameter of binary tree --> Optimised
    int height = 0;
    cout<<"Diameter of the binary tree: "<<Diameter(root, &height)<<endl;
    
    return 0;
}