#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int s)
{
  unordered_map<int, int> mp;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (mp.find(s - a[i]) != mp.end())
    {
      count += mp[s - a[i]];
    }
    mp[a[i]]++;
  }
  return count;
}

int main()
{
  int n, s;
  cin >> n >> s;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << solve(a, n, s);
  return 0;
}
