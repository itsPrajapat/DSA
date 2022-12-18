// Binary Tree

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

// PreOrder Traversal
void preorderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

// InOrder Traversal
void inorderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

// Post Order Traversal
void postorderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

// Level Order Traversal
void levelOrderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        if(node!=NULL){
            cout<<node->data<<" ";

            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}

// Count of Nodes
int nodeCount(struct Node* root){
    if(root==NULL){
        return 0;
    }

    return nodeCount(root->left) + nodeCount(root->right) + 1;
}

// Sum of Nodes
int sumOfNode(struct Node* root){
    if(root==NULL){
        return 0;
    }

    return sumOfNode(root->left) + sumOfNode(root->right) + root->data;
}

// Sum Replacement
void sumReplace(Node* root){
    if(root==NULL){
        return;
    }

    root->data = root->data + sumOfNode(root->left) + sumOfNode(root->right);
    sumReplace(root->left);
    sumReplace(root->right);
}

// Calculate the height of tree
int calHeight(struct Node* root){
    // base case
    if(root==NULL){
        return 0;
    }

    return max(calHeight(root->left), calHeight(root->right)) + 1;
}

// calculate diameter
int calDiameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int lHeight = calHeight(root->left);
    int rHeight = calHeight(root->right);
    int currDiameter = lHeight + rHeight + 1;

    int lDiameter = calDiameter(root->left);
    int rDiameter = calDiameter(root->right);

    return max(currDiameter, max(lDiameter, rDiameter));
}

// search in inorder array
int search(int inorder[], int start, int end, int key){
    for(int i=start; i<=end; i++){
        if(inorder[i]==key){
            return i;
        }
    }
    return -1;
}

// Build a Tree from Inorder and Preorder
Node* buildTree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;

    // base condition
    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    Node* node = new Node(curr);

    if(start==end){
        return node;
    }

    int pos = search(inorder, start, end, curr);

    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node;
}


int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Total no. of nodes in Binary Tree : "<<nodeCount(root)<<endl;

    cout<<"Sum of Nodes : "<<sumOfNode(root)<<endl;

    int preorder[7] = {7, 6, 4, 3, 5, 2, 1};
    int inorder[7] = {4, 6, 3, 7, 2, 5, 1};
    int postorder[7] = {4, 3, 6, 2, 1, 5, 7};

    Node* newNode = buildTree(preorder, inorder, 0, 6);
    levelOrderTraversal(newNode);
    cout<<endl;

    cout<<"Height of Tree : "<<calHeight(root);
    cout<<endl;
    cout<<"Diameter of Tree : "<<calDiameter(root);
    cout<<endl;

    sumReplace(root);
    levelOrderTraversal(root);
    
    return 0;
}