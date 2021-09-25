#include<bits/stdc++.h>
using namespace std;

// bool solve(int a[],int b[],int n,int m)
// {
//   unordered_map<int,int>mp;
//   for(int i=0;i<m;i++)
//     mp[b[i]]++;
//   for(int i=0;i<n;i++)
//   {
//     if(mp.find(a[i])!=mp.end())
//       mp[a[i]]++;
//   }
//   for(auto x : mp)
//   {
//     if(x.second<2)
//       return false;

//   }
//   return true;
// }


bool solve(int a[],int b[],int n,int m)
{
  unordered_set<int>st;
  for(int i=0;i<n;i++)
    st.insert(a[i]);
  for(int i=0;i<m;i++)
  {
    if(st.find(b[i])==st.end())
      return false;
  }
  return true;
}


int main()
{
  int n,m;
  cin>>n>>m;
  int a[n];
  int b[m];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int j=0;j<m;j++)
    cin>>b[j];
  cout<<solve(a,b,n,m);

  return 0;
}
