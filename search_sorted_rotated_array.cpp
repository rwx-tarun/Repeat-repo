#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n,int x)
{
    int low=0;
    int high = n-1;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==x){
            return mid;
            }
        else{
            if(a[mid]>a[low])
            {
                if(a[mid]>x && a[low]<=x)
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            else{
                if(a[mid]<a[high]){
                    if(a[mid]<x && a[high]>=x)
                    {
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
            

        }
    }
    return -1;
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
