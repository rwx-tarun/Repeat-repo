#include <bits/stdc++.h>

using namespace std;

int dp[100][100];
int knapsackRec(int wt[], int pr[], int n, int W)
{
  if (W == 0 || n == 0)
    return 0;

  if (W >= wt[n - 1])
  {
    return max(pr[n - 1] + knapsack(wt, pr, n - 1, W - wt[n - 1]), knapsack(wt, pr, n - 1, W));
  }
  else
  {
    return knapsack(wt, pr, n - 1, W);
  }
}
}

int knapsackMem(int wt[], int pr[], int n, int W)
{
  if (W == 0 || n == 0)
    return 0;
  if (dp[n][W] != -1)
    return dp[n][W];

  if (W >= wt[n - 1])
  {
    return dp[n][W] = max(pr[n - 1] + knapsack(wt, pr, n - 1, W - wt[n - 1]), knapsack(wt, pr, n - 1, W));
  }
  else
  {
    return dp[n][W] = knapsack(wt, pr, n - 1, W);
  }
}
}

int main()
{
  int n;
  cin >> n;
  int wt[n], pr[n];
  int W;
  cin >> W;
  for (int i = 0; i < n; i++)
    cin >> wt[i];
  for (int i = 0; i < n; i++)
    cin >> pr[i];

  cout << knapsackRec(wt, pr, n, W);
  memset(dp, -1, sizeof(dp));
  cout << knapsackMem(wt, pr, n, W);
  return 0;
}
