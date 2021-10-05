#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n,int x)
{
    int low =0;
    int high = n-1;
    int res =-1;
    while(low<=high)
    {   int mid = (low+high)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]<x)
        {
            res = mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return res;

}

int main()
{
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<solve(a,n,x);
    return 0;
}
