#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[], int n, int mid, int k)
{
    int pos = a[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] - pos >= mid)
        {
            pos = a[i];
            cnt++;
            if (cnt == k)
                return true;
        }
    }
    return false;
}

int solve(int a[], int n, int k)
{
    int res = -1;
    sort(a, a + n);
    int low = a[0];
    int high = a[n - 1];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isValid(a, n, mid, k))
        {
            res = max(mid, res);
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << solve(a, n, k);
    return 0;
}
