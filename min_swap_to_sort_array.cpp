#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    int cnt = 0;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = {a[i], i};
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        if (v[i].second == i)
            continue;
        else
        {
            cnt++;
            swap(v[i], v[v[i].second]);
            i--;
        }
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(a, n);
    return 0;
}
