#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
{
  int d, b, c;
  d = n - 1;
  b = 0;
  c = 0;

  while (c <= d)
  {
    if (a[c] == 0)
    {
      swap(a[b], a[c]);
      b++;
    }
    else
    {
      if (a[c] == 1)
      {
        c++;
      }
      else
      {
        swap(a[c], a[d]);
        d--;
      }
    }
  }

  for (int i = 0; i < n; i++)
    cout << a[i];
}

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];

  sort012(a, n);
  return 0;
}
