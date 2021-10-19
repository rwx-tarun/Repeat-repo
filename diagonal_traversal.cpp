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

void diagonalTraversal(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        while (curr)
        {
            cout << curr->key << " ";
            if (curr->left)
                q.push(curr->left);
            curr = curr->right;
        }
        q.pop();
    }
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->right = new Node(8);
    root->right->right = new Node(9);
    diagonalTraversal(root);
    return 0;
}
