#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
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


void getVerticalOrderPrint(Node* root, int hdis, map<int, vector<int>> &m){

    // base case
    if(root==NULL){
        return;
    }

    m[hdis].push_back(root->data);

    getVerticalOrderPrint(root->left, hdis-1, m);
    getVerticalOrderPrint(root->right, hdis+1, m);

}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // declaring the map
    map<int, vector<int>> m;
    int hdis = 0;

    getVerticalOrderPrint(root, hdis, m);

    map<int, vector<int>> :: iterator itr;

    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        for(int i=0; i<(itr->second).size(); i++){
            cout<<(itr->second)[i]<<" ";
        }cout<<endl;
    }


    return 0;
}