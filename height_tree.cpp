#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;

    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int height(Node *root)
{
    if (root)
        return 1+max(height(root->right),height(root->left);
    return 0;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);
    inorder(root);
    return 0;
}
