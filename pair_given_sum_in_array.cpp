#include<bits/stdc++.h>
using namespace std;


pair<int,int> solve(int a[],int n,int x)
{
    unordered_set <int> st;
    for(int i=0;i<n;i++)
    {
        int temp = x-a[i];
        if(st.find(temp)!=st.end())
        {
            return {a[i],temp};
        }
        st.insert(a[i]);
    }
    return {0,0};
}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    pair<int,int>p = solve(a,n,x);
    cout<<p.first<<" "<<p.second;
    return 0;
}
