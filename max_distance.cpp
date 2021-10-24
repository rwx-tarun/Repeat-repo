
//Given an array A of integers of size N. Find the maximum of value of j - i such that A[i] <= A[j].



int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>>p;

    int n = A.size();

    for(int i =0;i<n;i++)
    {
        p.push_back({A[i],i});
    }
    
    sort(p.begin(),p.end());
    int index =0;
    int res =0;
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        mn =min(p[i].second,mn);
        res = max(res , p[i].second-mn);
    }
    return res;
}
