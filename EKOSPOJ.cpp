#include <bits/stdc++.h>
using namespace std;

bool isValid(int a[], int n, int c, int mid)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
        {
            sum = sum + (a[i] - mid);
        }
    }
    if (c <= sum)
        return true;
    return false;
}

int solve(int a[], int n, int c)
{
    sort(a, a + n);
    int low = 0;
    int high = a[n - 1];
    int res = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isValid(a, n, c, mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return res;
}

int main()
{
    int n, c;
    cin >> n >> c;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(a, n, c);
}
