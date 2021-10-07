#include <bits/stdc++.h>
using namespace std;

bool isVal(int a[], int n, int k, int mid)
{
    int student = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
            return false;
        if (sum + a[i] > mid)
        {
            student++;
            sum = a[i];
            if (student > k)
                return false;
        }
        else
            sum += a[i];
    }
    return true;
}
int solve(int a[], int n, int k)
{

    if (n < k)
        return -1;
    int mn = INT_MAX;
    int sum = 0;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        mn = min(a[i], mn);
        sum += a[i];
    }
    int low = 0;
    int high = sum;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isVal(a, n, k, mid))
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
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << solve(a, n, k);
    return 0;
}
