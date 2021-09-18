#include <bits/stdc++.h>
using namespace std;

int kthMin(int a[], int n, int k)
{
  priority_queue<int, vector<int>, greater<int>> pq;

  for (int i = 0; i < n; i++)
  {
    pq.push(a[i]);
  }

  while (k > 1)
  {
    pq.pop();
    k--;
  }
  return pq.top();
}

int main()
{
  int n, k;
  cin >> n >> k;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  cout << kthMin(a, n, k);
  return 0;
}
