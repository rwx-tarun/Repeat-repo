
#include<bits/stdc++.h>

using namespace std;
int main ()
{ 
    int i,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    i=n-2;
    while(i>=0 && arr[i+1]<=arr[i]) i--;
    
    if (i>=0)
    {   
        int j=n-1;
        while(arr[j]<=arr[i]) j--;
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    reverse(arr+i+1,arr+n);

    cout << endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    return 1;
}
