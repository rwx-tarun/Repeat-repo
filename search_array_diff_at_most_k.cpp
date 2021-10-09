#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int k, int x)
{
    for (int i = 0; i < n;)
    {
        if (a[i] == x)
            return i;
        i = i + max(1, abs(a[i] - x) / k);
    }
    return -1;
}

int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(a, n, k, x);
    return 0;
}
