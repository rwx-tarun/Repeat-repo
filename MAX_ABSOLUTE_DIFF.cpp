// You are given an array of N integers, A1, A2, .... AN.

// Return the maximum value of f(i, j) for all 1 ≤ i, j ≤ N. f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.


int Solution::maxArr(vector<int> &A) {
    
    int xmx =INT_MIN,ymx=INT_MIN;
    int xmn= INT_MAX,ymn=INT_MAX;
    for(int i=0;i<A.size();i++)
    {
        xmx = max(xmx,A[i]+i);
        xmn = min(xmn,A[i]+i);
        ymx = max(ymx,A[i]-i);
        ymn = min(ymn,A[i]-i);
    }
    
    return max(xmx-xmn,ymx-ymn);

}
