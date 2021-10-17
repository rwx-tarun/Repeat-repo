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

void spiral(Node *root)
{
    if (!root)
        return;
    stack<Node *> s;
    queue<Node *> q;
    q.push(root);
    bool reverse = false;

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (reverse)
            {
                s.push(curr);
            }
            else
            {
                cout << curr->key << " ";
            }
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        if (reverse)
        {
            while (!s.empty())
            {
                Node *temp = s.top();
                cout << temp->key << " ";
                s.pop();
            }
        }
        reverse = !reverse;
    }
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);
    spiral(root);
    return 0;
}
