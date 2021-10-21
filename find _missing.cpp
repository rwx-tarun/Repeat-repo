int Solution::firstMissingPositive(vector<int> &A) {
    
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=i+1 && A[i]>0 && A[i]<A.size() && A[A[i]-1]!=A[i])
        {
            swap(A[i],A[A[i]-1]);
            i--;
        }
    }
    for(int i=1;i<A.size()+1;i++)
    {
        if(A[i-1]!=i)
            return i;
    }
    return A.size()+1;
    
    
