#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int k)
    {
        key = k;
        right = left = NULL;
    }
};

void inorder(vector<int> &v, int n, vector<int> a, int index)
{
    if (index >= n)
        return;
    inorder(v, n, a, 2 * index + 1);
    v.push_back(a[index]);
    inorder(v, n, a, 2 * index + 2);
}

int minSwap(vector<int> &v, int n)
{
    vector<pair<int, int>> p(n);
    for (int i = 0; i < n; i++)
    {
        p[i] = {v[i], i};
    }
    sort(p.begin(), p.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].second == i)
            continue;
        else
        {
            cnt++;
            swap(p[i], p[p[i].second]);
            i--;
        }
    }
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    inorder(v, n, a, 0);
    // for (auto x : v)
    //     cout << x << " ";
    cout << minSwap(v, n);
    return 0;
}
