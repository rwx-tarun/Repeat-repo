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

int widthTree(Node *root)
{
    if (!root)
        return 0;
    queue<Node *> q;
    q.push(root);
    int res = 0;
    while (!q.empty())
    {
        int n = q.size();
        res = max(res, n);
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
    }
    return res;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);

    cout << widthTree(root);
    return 0;
}
