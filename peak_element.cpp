#include<bits/stdc++.h>
using namespace std;


int solve(int a[],int n)
{
        int low=0,high=n-1;
      while(low<=high){
          int mid=(high+low)/2;
          if((mid==0||a[mid-1]<=a[mid])&&(mid==n-1||a[mid+1]<=a[mid])){
              return mid;
          }
          if(mid>0&&a[mid-1]>=a[mid]){
              high=mid-1;
          }else{
              low=mid+1;
          }
      }
      
      return 0;
}



int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        
    cout<<solve(a,n);
    return 0;
}
