#include <bits/stdc++.h>
using namespace std;

int repeated(int a[], int n)
{
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
    mp[a[i]]++;
  for (auto x : mp)
  {
    if (x.second > 1)
      return x.first;
  }
  return 0;
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cout << repeated(a, n);
  return 0;
}
