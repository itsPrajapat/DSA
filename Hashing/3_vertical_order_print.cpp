// Vertical Order Print of a Binary Tree 

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left, *right;

    // constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


void getVerticalOrder(Node* root, int hdis, map<int, vector<int>> &m){

    // base case
    if(root==NULL){
        return;
    }

    m[hdis].push_back(root->data);

    getVerticalOrder(root->left, hdis-1, m);
    getVerticalOrder(root->right, hdis+1, m);
}

int main(){

    Node* root = new Node(10);
    root->left = new Node(7);
    root->right = new Node(4);
    root->left->left = new Node(3);
    root->left->right = new Node(11);
    root->right->left = new Node(14);
    root->right->right = new Node(6);

    map<int, vector<int>> m;
    int horizontal_distance = 0;

    getVerticalOrder(root, horizontal_distance, m);

    map<int, vector<int>> :: iterator itr;

    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        for(int i=0; i<(itr->second).size(); i++)
        {
            cout<<(itr->second)[i]<<" ";
        }cout<<endl;
    }
    
    return 0;
}