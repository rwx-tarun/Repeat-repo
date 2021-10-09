#include <bits/stdc++.h>
using namespace std;

// bool BS(int a[],int s,int x)
// {
//     int low = 0;
//     int high =s-1;
//     while(low<=high)
//     {
//         int mid = (low+high)/2;
//         if(a[mid]==x){
//             return true;
//         }
//         else{
//             a[mid]>x ? high =mid-1:low = mid+1;
//         }
//     }
//     return false;
// }

//bool findPair(int a[], int s, int n){
// unordered_map<long,long>mp;
// for(int i=0;i<n;i++){
//     mp[a[i]]++;
// }

// for(int i=0;i<n;i++)
// {
//     int res =  a[i]+n;
//     if(mp[res])
//         return true;
// }
// return false;

// sort(a,a+s);

// int i = 0;
// int j = s-1;
// while(i<j && i<s && j<s){
//     if(a[i]-a[j]==n)
//         return true;
//     else{
//         abs(a[i]-a[j])>n?j--:i++;
//     }
// }
// return 0;

//     sort(a,a+s);
//     for(int i=0;i<n;i++)
//     {
//         if(BS(a,s,a[i]+n))
//             return true;
//         return false;
//     }

// }

int main()
{
    int s, n;
    cin >> s >> n;
    int a[s];
    for (int i = 0; i < s; i++)
        cin >> a[i];
    cout << solve(a, s, n);
    return 0;
}
