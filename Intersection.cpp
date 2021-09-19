#include <bits/stdc++.h>
using namespace std;

void intersectionA(int a[], int b[], int n, int m)
{
  unordered_map<int, int> mp;
  for (int i = 0; i < n; i++)
  {
    mp[a[i]]++;
  }
  for (int i = 0; i < m; i++)
  {
    mp[b[i]]++;
  }

  for (auto x : mp)
  {
    if (x.second == 2)
      cout << x.first << " ";
  }
}

int main()
{
  int n, m;
  cin >> n >> m;
  int a[n], b[m];

  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < m; i++)
    cin >> b[i];

  intersectionA(a, b, n, m);

  return 0;
}
