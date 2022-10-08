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
int search(char inorder[], int start, int end, char curr){
    for(int i=start; i<=end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

// Bulid a tree from preorder and inorder
// start and end represent the starting and end index of inorder array
Node* buildTree(char preorder[], char inorder[], int start, int end){
    static int idx = 0;

    // base condition
    if(start > end){
        return NULL;
    }

    char curr = preorder[idx];
    idx++;

    Node* node = new Node(curr);

    if(start == end){
        return node;
    }

    int pos = search(inorder, start, end, curr);

    node->left  = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node;
}

// Inorder Traversal to check ki jo humara root build hoke aayega wo shi bhi hai ya nhi
void inorderPrint(struct Node* root){
    if(root == NULL){
        return;
    }
    inorderPrint(root->left);
    inorderPrint(root->right);
    cout<<root->data<<" ";
}

int main(){

    char preorder[] = {a, b, d, e, c, f, g};
    char inorder[]  = {d, b, e, a, f, c, g};

    // build tree
    Node* root = buildTree(preorder, inorder, 0, 6);
    inorderPrint(root);
    
    return 0;
}