#include <bits/stdc++.h>
using namespace std;

void unionA(int a[], int b[], int n, int m)
{
  unordered_set<int> st;
  for (int i = 0; i < n; i++)
    st.insert(a[i]);
  for (int i = 0; i < m; i++)
    st.insert(b[i]);
  for (auto x : st)
    cout << x << endl;
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

  unionA(a, b, n, m);

  return 0;
}
