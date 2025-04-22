#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preOrderTraversal(struct Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}

void inOrderTraversal(struct Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}

void postOrderTraversal(struct Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}

// Level Order Traversal
void levelOrderTraversal(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();

        if (node != NULL)
        {
            cout << node->data << " ";

            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}

int nodeCount(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return nodeCount(root->left) + nodeCount(root->right) + 1;
}

int nodeSum(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return nodeSum(root->left) + nodeSum(root->right) + root->data;
}

void sumReplace(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    root->data = root->data + root->left->data + root->right->data;
    sumReplace(root->left);
    sumReplace(root->right);
}

int calHeight(struct Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return max(calHeight(root->left), calHeight(root->right)) + 1;
}

int calDiameter(struct Node *root)
{
    if (root == NULL)
    {
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
int search(int inorder[], int start, int end, int key)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == key)
        {
            return i;
        }
    }
    return -1;
}

Node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;

    if (start > end)
    {
        return NULL;
    }

    int curr = preorder[idx];
    idx++;

    struct Node *node = new Node(curr);

    if (start == end)
    {
        return node;
    }

    int pos = search(inorder, start, end, curr);

    node->left = buildTree(preorder, inorder, start, pos - 1);
    node->right = buildTree(preorder, inorder, pos + 1, end);

    return node;
}

bool isBalance(struct Node *root)
{
    // base case
    if (root == NULL)
    {
        return true;
    }

    if (isBalance(root->left) == false)
    {
        return false;
    }

    if (isBalance(root->right) == false)
    {
        return false;
    }

    int lH = calHeight(root->left);
    int rH = calHeight(root->right);

    if (abs(lH - rH) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void rightView(struct Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            struct Node *node = q.front();
            q.pop();

            if (i == n - 1)
            {
                cout << node->data << " ";
            }
            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
    }
}

void leftView(struct Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            struct Node *node = q.front();
            q.pop();

            if (i == 0)
            {
                cout << node->data << " ";
            }
            if (node->left != NULL)
            {
                q.push(node->left);
            }
            if (node->right != NULL)
            {
                q.push(node->right);
            }
        }
    }
}

Node *LCA(struct Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }

    Node *leftLCA = LCA(root->left, n1, n2);
    Node *rightLCA = LCA(root->right, n1, n2);

    if (leftLCA && rightLCA)
    {
        return root;
    }

    if (leftLCA != NULL)
    {
        return leftLCA;
    }

    return rightLCA;
}

bool getPath(struct Node *root, int key, vector<int> &path)
{
    if (root == NULL)
    {
        return false;
    }

    path.push_back(root->data);

    if (root->data == key)
    {
        return true;
    }

    if (getPath(root->left, key, path) || getPath(root->right, key, path))
    {
        return true;
    }

    path.pop_back();
    return false;
}

int LCA2(struct Node *root, int n1, int n2)
{
    vector<int> path1, path2;

    if (!getPath(root, n1, path1) || !getPath(root, n2, path2))
    {
        return -1;
    }

    int pc;
    for (int pc = 0; pc < path1.size() && path2.size(); pc++)
    {
        if (path1[pc] != path2[pc])
        {
            break;
        }
    }
    return path1[pc - 1];
}

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Preorder : ";
    preOrderTraversal(root);
    cout << endl;
    cout << "Inorder : ";
    inOrderTraversal(root);
    cout << endl;
    cout << "Postorder : ";
    postOrderTraversal(root);
    cout << endl;
    cout << "Levelorder : ";
    levelOrderTraversal(root);
    cout << endl;
    cout << "Node Count : " << nodeCount(root);
    cout << endl;
    cout << "Node Sum : " << nodeSum(root);
    cout << endl;
    cout << "Height : " << calHeight(root);
    cout << endl;
    cout << "Diameter : " << calDiameter(root);
    cout << endl;

    int preorder[7] = {7, 6, 4, 3, 5, 2, 1};
    int inorder[7] = {4, 6, 3, 7, 2, 5, 1};
    int postorder[7] = {4, 3, 6, 2, 1, 5, 7};
    struct Node *node = buildTree(preorder, inorder, 0, 6);
    cout << "Levelorder : ";
    levelOrderTraversal(node);
    cout << endl;
    cout << "isBalance : " << isBalance(root);
    cout << endl;
    cout << "right view : ";
    rightView(root);
    cout << endl;
    cout << "left view : ";
    leftView(root);
    cout << endl;
    // cout<<"LCA : "<<LCA2(root, 2, 3); cout<<endl;
    struct Node *lca = LCA(root, 6, 7);
    cout << "LCA : " << lca->data;
    cout << endl;
}