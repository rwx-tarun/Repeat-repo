#include <bits/stdc++.h>
using namespace std;

bool solve(int a[], int i, int j, int x)
{
    while (i < j)
    {
        if (a[i] + a[j] + x == 0)
            return true;
        a[i] + a[j] + x > 0 ? j-- : i++;
    }
    return false;
}
bool findTriplets(int a[], int n)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        if (solve(a, i + 1, n - 1, a[i]))
            return true;
    }
    return false;
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
