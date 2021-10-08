#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == i + 1)
            return i + 1;
    }
    return -1;
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
