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

int countNode(Node *root)
{
    Node *curr = root;
    int lh = 0, rh = 0;
    while (curr)
    {
        lh++;
        curr = curr->left;
    }
    curr = root;
    while (curr)
    {
        rh++;
        curr = curr->right;
    }

    if (lh == rh)
        return pow(2, lh) - 1;

    return 1 + countNode(root->right) + countNode(root->left);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->left->right = new Node(9);
    cout << countNode(root);
    return 0;
}
