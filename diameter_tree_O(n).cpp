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
int res = 0;
int height(Node *root)
{
    if (!root)
        return 0;
    int lf = height(root->left);
    int rt = height(root->right);
    res = max(res, lf + rt + 1);
    return 1 + max(lf, rt);
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(6);
    root->right = new Node(7);
    root->left->left = new Node(8);
    root->right->right = new Node(9);
    cout << "height " << height(root) << " ";
    cout << "diameter " << res;
    return 0;
}
