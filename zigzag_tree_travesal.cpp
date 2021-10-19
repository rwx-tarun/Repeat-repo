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

void zigzag(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    stack<Node *> st;
    q.push(root);
    bool reverse = false;
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
            if (reverse)
            {
                st.push(curr);
            }
            else
            {
                cout << curr->key << " ";
            }
        }
        if (reverse)
        {
            while (!st.empty())
            {
                Node *temp = st.top();
                cout << temp->key << " ";
                st.pop();
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
    root->left->right = new Node(8);
    root->right->right = new Node(9);
    zigzag(root);
    return 0;
}
