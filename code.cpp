#include <bits/stdc++.h>
using namespace std;

int solve(int a[], int n)
{
  sort(a, a + n);
  int res = 0;
  for (int i = n - 2; i >= 0; i = i - 1)
  {
    res = res + a[i + 1] - a[i];
  }
  return res;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cout << solve(a, n);
  return 0;
}