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
int res = 0;

Node *LCA(Node *root, int n1, int n2)
{
    if (!root)
        return NULL;
    if (root->key == n1 || root->key == n2)
        return root;
    Node *lca1 = LCA(root->left, n1, n2);
    Node *lca2 = LCA(root->right, n1, n2);
    if (lca1 != NULL && lca2 != NULL)
        return root;
    if (lca1 != NULL)
        return lca1;
    else
        return lca2;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);
    int n1, n2;
    n1 = 6;
    n2 = 7;
    Node *res = LCA(root, n1, n2);
    cout << res->key;
    return 0;
}
