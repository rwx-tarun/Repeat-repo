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

void bottomView(Node *root)
{
    queue<pair<Node *, int>> q;
    map<int, int> mp;
    q.push({root, 0});
    while (!q.empty())
    {
        auto curr = q.front().first;
        int h = q.front().second;
        q.pop();
        mp[h] = curr->key;
        if (curr->left)
            q.push({curr->left, h - 1});
        if (curr->right)
            q.push({curr->right, h + 1});
    }
    for (auto x : mp)
        cout << x.second << " ";
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->right = new Node(8);
    root->right->right = new Node(9);
    bottomView(root);
    return 0;
}
