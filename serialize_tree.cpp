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

void serialize(Node *root, vector<int> &v)
{
    if (root == NULL)
    {
        v.push_back(-1);
        return;
    }
    v.push_back(root->key);
    serialize(root->left, v);
    serialize(root->right, v);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);
    vector<int> v;
    serialize(root, v);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;
    return 0;
}
