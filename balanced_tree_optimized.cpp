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
    if (!root)
        return 0;
    return 1 + max(height(root->left), height(root->right));
}

int balanced(Node *root)
{
    if (root == NULL)
        return 0;
    int lf = balanced(root->left);
    if (lf == -1)
        return -1;
    int rt = balanced(root->right);
    if (rt == -1)
        return -1;
    if (abs(lf - rt) > 1)
        return -1;
    else
    {
        return 1 + max(lf, rt);
    }
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);

    if (balanced(root) == -1)
        cout << "No";
    else
    {
        cout << "Yes";
    }
    return 0;
}
