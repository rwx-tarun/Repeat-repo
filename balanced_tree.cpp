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

bool balanced(Node *root)
{
    if (root == NULL)
        return true;
    int lf = height(root->left);
    int rt = height(root->right);
    return (abs(lf - rt) <= 1 && balanced(root->left) && balanced(root->right));
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    // root->right = new Node(7);
    root->left->left = new Node(8);
    // root->right->right = new Node(9);

    cout << balanced(root);
    return 0;
}
