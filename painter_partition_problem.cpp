#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[], int n, int p, int mid)
{
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum > mid)
        {
            cnt++;
            sum = a[i];
        }
    }
    if (p < cnt)
        return false;
    return true;
}

int solve(int a[], int n, int p)
{
    int res = -1;
    int sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        mx = max(a[i], mx);
    }

    int low = mx;
    int high = sum;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (isValid(a, n, p, mid))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;
}

int main()
{
    int n, p;
    cin >> n >> p;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(a, n, p);
    return 0;
}
