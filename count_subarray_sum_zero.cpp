#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
    unordered_map<int, int> mp;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (sum == 0)
            cnt++;
        cnt += mp[sum];
        mp[sum]++;
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
