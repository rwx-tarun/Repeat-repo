#include <bits/stdc++.h>
using namespace std;

vector mergeIntervals(vector<vector<int>>v)
{
  int start = v[0][0];
  int end = v[0][1];
  vector<vector<int>>ans;

  for(int i=1;i<v.size();i++)
  {
    if(end<v[i][0])
    {
      end = max(end , v[i][1]);
    }
    else
    {
      ans.push_back({start , end});
      start = v[i][0];
      end = v[i][1];
    }
  }
  return ans;
}
