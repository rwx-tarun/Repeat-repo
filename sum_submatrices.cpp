//Given a 2D Matrix A of dimensions N*N, we need to return sum of all possible submatrices.




int Solution::solve(vector<vector<int> > &A) {
    int n =A.size();
    int sum =0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum = sum + (i+1)*(j+1)*(n-1)*(n-j)*A[i][j];
        }
    }
    return sum;
}
