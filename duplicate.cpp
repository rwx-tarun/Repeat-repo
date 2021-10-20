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
unordered_map<string, int> mp;
string duplicate(Node *root)
{
    if (!root)
        return "$";
    string s = "";
    if (!root->left && !root->right)
    {
        s = s + to_string(root->key);
        return s;
    }
    s = s + to_string(root->key);
    s = s + duplicate(root->left);
    s = s + duplicate(root->right);
    mp[s]++;
    return s;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(6);
    root->left->left = new Node(8);
    root->left->right = new Node(2);
    root->right->left = new Node(8);
    root->right->right = new Node(2);

    duplicate(root);
    int flag = 0;
    for (auto x : mp)
    {
        if (x.second >= 2)
            flag = 1;
    }
    if (flag == 1)
        cout << "yes";
    else
    {
        cout << "no";
    }
    return 0;
}
