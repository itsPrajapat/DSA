// Build Possible BSTs for the given no. of nodes

#include<iostream>
#include<vector>
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


vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    // base case
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        vector<Node*> leftSubtrees = constructTrees(start, i-1);
        vector<Node*> rightSubtrees = constructTrees(i+1, end);

        for(int j=0; j<leftSubtrees.size(); j++){
            Node* left = leftSubtrees[j];
            for(int k=0; k<rightSubtrees.size(); k++){
                Node* right = rightSubtrees[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}


// Preorder print
void preorderPrint(Node* root){
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}

int main(){

    vector<Node*> totalTrees = constructTrees(1, 3);

    for(int i=0; i<totalTrees.size(); i++){
        cout<<(i+1)<<" : ";
        preorderPrint(totalTrees[i]);
        cout<<endl;
    }

    return 0;
}