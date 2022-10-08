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

// search function to find the curr in inorder array
int search(int inorder[], int start, int end, int val){
    for(int i=start; i<=end; i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}

// Bulid a tree from postorder and inorder
// start and end represent the starting and end index of inorder array
Node* buildTree(int postorder[], int inorder[], int start, int end){
    static int idx = 8;  // 4 = size of array - 1

    // base case
    if(start > end){
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node* node = new Node(val);

    if(start == end){
        return node;
    }

    int pos = search(inorder, start, end, val);

    node->right = buildTree(postorder, inorder, pos+1, end);
    node->left  = buildTree(postorder, inorder, start, pos-1);

    return node;
}

// Inorder Traversal to check ki jo humara root build hoke aayega wo shi bhi hai ya nhi
void inorderPrint(struct Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main(){

    int postorder[] = {29, 39, 66, 52, 69, 84, 81, 67, 50};
    int inorder[]   = {29, 39, 50, 52, 66, 67, 69, 81, 84};

    // build tree
    Node* root = buildTree(postorder, inorder, 0, 8);
    inorderPrint(root);
    
    return 0;
}