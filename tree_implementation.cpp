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

void inorder(Node *head)
{
    if (head == NULL)
        return;
    cout << head->key << " ";
    inorder(head->left);
    inorder(head->right);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(4);
    root->right = new Node(6);
    inorder(root);
    return 0;
}
