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

int findBurnTime(unordered_map<Node *, Node *> &mp, Node *target)
{
    int res = 0;
    queue<Node *> q;
    q.push(target);
    unordered_map<Node *, int> vis;
    vis[target] = 1;
    while (!q.empty())
    {
        int n = q.size();
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left && !vis[curr->left])
            {
                flag = 1;
                vis[curr->left] = 1;
                q.push(curr->left);
            }
            if (curr->right && !vis[curr->right])
            {
                flag = 1;
                vis[curr->right] = 1;
                q.push(curr->right);
            }
            if (mp[curr] && !vis[mp[curr]])
            {
                flag = 1;
                vis[mp[curr]] = 1;
                q.push(mp[curr]);
            }
        }
        if (flag == 1)
            res++;
    }
    return res;
}

Node *findTarget(Node *root, int target, unordered_map<Node *, Node *> &mp)
{
    Node *res;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        Node *curr = q.front();
        q.pop();
        if (curr->key == target)
            res = curr;
        if (curr->left)
        {
            mp[curr->left] = curr;
            q.push(curr->left);
        }
        if (curr->right)
        {
            mp[curr->right] = curr;
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
    int target;
    cin >> target;
    unordered_map<Node *, Node *> mp;
    Node *targ = findTarget(root, target, mp);
    int res = findBurnTime(mp, targ);
    cout << res;
    return 0;
}
