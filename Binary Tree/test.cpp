#include<bits/stdc++.h>
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

// preOrder Traversal
void preOrderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

// inOrder Traversal
void inOrderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    inOrderTraversal(root->left);
    cout<<root->data<<" ";
    inOrderTraversal(root->right);
}

// postOrder Traversal
void postOrderTraversal(struct Node* root){
    if(root==NULL){
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

// levelOrder Traversal
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
        }else if(!q.empty()){
            q.push(NULL);
        }
    }
}

// Node Count
int countNode(struct Node* root){
    if(root==NULL){
        return 0;
    }

    int count = 0;
    count += countNode(root->left);
    count += countNode(root->right);

    return count+1;
}

// Node Sum
int sumNode(struct Node* root){
    if(root==NULL){
        return 0;
    }

    int sum = 0;
    sum += sumNode(root->left);
    sum += sumNode(root->right);

    return sum+root->data;
}

// Height Of Tree
int heightOfTree(struct Node* root){
    if(root == NULL){
        return 0;
    }

    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);

    return max(lHeight, rHeight)+1;
}


int diameterOfTree(struct Node* root){
    if(root == NULL){
        return 0;
    }

    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);
    int currDiameter = lHeight+rHeight+1;

    int lDiameter = diameterOfTree(root->left);
    int rDiameter = diameterOfTree(root->right);

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

Node* buildTree(int inorder[], int preorder[], int start, int end){
    static int idx = 0;

    if(start>end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    Node* rootNode = new Node(curr);

    if(start==end){
        return rootNode;
    }

    int pos = search(inorder, start, end, curr);

    rootNode->left = buildTree(inorder, preorder, start, pos-1);
    rootNode->right = buildTree(inorder, preorder, pos+1, end);

    return rootNode;
}

// check if a tree is balance or not
bool isBalance(struct Node* root){
    if(root==NULL){
        return true;
    }

    if(isBalance(root->left)==false){
        return false;
    }

    if(isBalance(root->right)==false){
        return false;
    }

    int lH = heightOfTree(root->left);
    int rH = heightOfTree(root->right);

    if(abs(lH-rH)<=1){
        return true;
    }else{
        return false;
    }
}

// right view
void rightView(struct Node* root){
    // base case
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i=0; i<n; i++){
            struct Node* top = q.front();
            q.pop();

            if(i==n-1){
                cout<<top->data<<" ";
            }
            if(top->left){
                q.push(top->left);
            }
            if(top->right){
                q.push(top->right);
            }
        }
    }
}

// left view
void leftView(struct Node* root){
    // base case
    if(root==NULL){
        return;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();

        for(int i=0; i<n; i++){
            struct Node* top = q.front();
            q.pop();

            if(i==0){
                cout<<top->data<<" ";
            }
            if(top->left){
                q.push(top->left);
            }
            if(top->right){
                q.push(top->right);
            }
        }
    }
}

Node* LCA(struct Node* root, int n1, int n2){
    // base case
    if(root==NULL){
        return NULL;
    }

    if(root->data == n1 || root->data == n2){
        return root;
    }

    Node* leftLCA = LCA(root->left, n1, n2);
    Node* rightLCA = LCA(root->right, n1, n2);

    if(leftLCA && rightLCA){
        return root;
    }

    if(leftLCA!=NULL){
        return leftLCA;
    }

    return rightLCA;
}

int main(){

    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // preOrder Traversal
    preOrderTraversal(root); cout<<endl;

    // inOrder Traversal
    inOrderTraversal(root); cout<<endl;

    // postOrder Traversal
    postOrderTraversal(root); cout<<endl;

    // levelOrder Traversal
    levelOrderTraversal(root); cout<<endl;

    // Node Count
    cout<<countNode(root); cout<<endl;

    // Node Count
    cout<<sumNode(root); cout<<endl;

    // Height
    cout<<heightOfTree(root); cout<<endl;

    // Diameter
    cout<<diameterOfTree(root); cout<<endl;


    int preorder[7] = {7, 6, 4, 3, 5, 2, 1};
    int inorder[7] = {4, 6, 3, 7, 2, 5, 1};

    // Build the tree from given inorder and preorder
    Node* newNode = buildTree(inorder, preorder, 0, 6);
    levelOrderTraversal(newNode); cout<<endl;

    // Check whether the given tree is balace or not
    cout<<isBalance(root)<<endl;

    // Right View of Tree
    rightView(root); cout<<endl;

    // Left View of Tree
    leftView(root); cout<<endl;

    // LCA
    Node* lca = LCA(root, 3, 4);
    cout<<lca->data<<endl; 
    
    return 0;
}