int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int dif = INT_MAX;
    for(int i =1;i<A.size();i++)
    {
        dif = min(dif,abs(A[i]-A[i-1]));
    }
    return dif;
}
