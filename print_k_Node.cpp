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

void printKnode(Node *root, int k)
{
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }
    else
    {
        printKnode(root->left,k-1);
        print(root->right,k-1);
    }
}
int main()
{
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);
    inorder(root);
    return 0;
}
