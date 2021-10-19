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

void left(Node *root, vector<int> &v)
{
    if (!root)
        return;
    if (root->left)
    {
        v.push_back(root->key);
        left(root->left, v);
    }
    else
    {
        if (root->right)
        {
            v.push_back(root->key);
            left(root->right, v);
        }
    }
}
void leaf(Node *root, vector<int> &v)
{
    if (!root)
        return;
    leaf(root->left, v);
    if (!root->left && !root->right)
        v.push_back(root->key);
    leaf(root->right, v);
}

void right(Node *root, vector<int> &v)
{
    if (!root)
        return;
    if (root->right)
    {
        right(root->right, v);
        v.push_back(root->key);
    }
    else
    {
        if (root->left)
        {
            right(root->left, v);
            v.push_back(root->key);
        }
    }
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->right = new Node(8);
    root->right->right = new Node(9);
    vector<int> v;
    left(root, v);
    leaf(root, v);
    right(root, v);
    for (auto x : v)
        cout << x << " ";
    return 0;
}
