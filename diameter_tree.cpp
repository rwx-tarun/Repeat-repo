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

int diameter(Node *root)
{
    if (!root)
        return 0;
    int d1 = 1 + height(root->right) + height(root->left);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);
    return max(max(d1, d2), d3);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);
    cout << diameter(root);
    return 0;
}
