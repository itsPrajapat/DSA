#include<iostream>
#include<stack>
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

void zigzagTraversal(Node* root){
        if(root==NULL){
            return;
        }
        stack<Node*> curr;
        stack<Node*> next;
        
        bool leftToRight = true;
        
        curr.push(root);
        
        while(!curr.empty()){
            Node* temp = curr.top();
            curr.pop();
            
            if(temp){
                cout<<temp->data<<" ";
                
                if(leftToRight){
                    if(temp->left){
                        next.push(temp->left);
                    }
                    if(temp->right){
                        next.push(temp->right);
                    }
                }else{
                     if(temp->right){
                        next.push(temp->right);
                    }
                    if(temp->left){
                        next.push(temp->left);
                    }
                }
            }
            if(curr.empty()){
                swap(curr, next);
                leftToRight = !leftToRight;
            }
        }
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


    zigzagTraversal(root);
 

    
    return 0;
}