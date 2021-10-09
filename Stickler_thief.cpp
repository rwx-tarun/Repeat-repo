#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    int dp[n + 1];
    dp[0] = a[0];
    dp[1] = max(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], a[i] + dp[i - 2]);
    }
    return dp[n - 1];
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
