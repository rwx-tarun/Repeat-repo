vector<int> Solution::solve(const vector<int> &A, const vector<int> &B) {
    int n = A.size();
    int m = B.size();
    vector<int>res(n+m,0);
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(A[i]>=B[j])
            res[k++]=B[j++];
        else
            res[k++]=A[i++];
    }

    while(i<n)
        res[k++]=A[i++];
    while(j<m)
        res[k++]=B[j++];
    return res;
}
