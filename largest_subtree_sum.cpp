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



int ans = INT_MIN;
int sumTree(Node *root)
{
    if (!root)
        return 0;
    cout << ans << endl;
    int sm = root->key + sumTree(root->left) + sumTree(root->right);
    ans = max(ans, sm);
    return sm;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(-2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(-6);
    root->right->right = new Node(2);
    cout << sumTree(root);
    return 0;
}
