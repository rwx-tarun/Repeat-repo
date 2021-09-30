#include <bits/stdc++.h>

using namespace std;

int solve(string s)
{
  unordered_map<char, int> mp;
  for (int i = 0; i < s.length(); i++)
    mp[s[i]]++;
  int mx = 0;
  for (auto x : mp)
  {
    mx = max(mx, x.second);
  }
  return mx;
}

int main()
{
  string s;
  cin >> s;

  cout << solve(s);

  return 0;
}
