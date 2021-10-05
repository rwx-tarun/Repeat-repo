#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(int a[][4], int n, int x)
{
    int i = 0;
    int j = 3;

    while (i >= 0 && i < n && j >= 0 && j < 4)
    {
        if (a[i][j] == x)
        {
            return {i, j};
        }
        else
        {
            if (a[i][j] > x)
            {
                j--;
            }
            else
            {
                if (a[i][j] < x)
                    i++;
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    pair<int, int> p;
    p = solve(a, n, x);
    cout << p.first << " " << p.second;
    return 0;
}
