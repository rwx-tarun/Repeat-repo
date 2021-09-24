#include <bits/stdc++.h>
using namespace std;

bool solve(int a[], int n)
{
  unordered_set<int> st;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
    if (sum == 0)
      return true;
    if (st.find(sum) != st.end())
      return true;
    st.insert(sum);
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
