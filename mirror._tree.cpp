#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *right, *left;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

void mirror(Node *root)
{
    if (!root)
        return;
    mirror(root->left);
    mirror(root->right);
    swap(root->left, root->right);
}

void BFS(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
    cout << endl;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);
    BFS(root);
    mirror(root);
    BFS(root);
    return 0;
}
