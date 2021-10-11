#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2)
            odd++;
    }
    return min(odd, n - odd);
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
