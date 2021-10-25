//Given 4 array of integers A, B, C and D of same size, find and return the maximum value of | A [ i ] - A [ j ] | + | B [ i ] - B [ j ] | + | C [ i ] - C [ j ] | + | D [ i ] - D [ j ] | + | i - j|
//where i != j and |x| denotes the absolute value of x.




int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C, vector<int> &D) {
    vector<int>v(5);
    int res =0;
    for(int i =0;i<32;i++){
        for(int j=0;j<5;j++){
            v[j]=((i>>j)&1);
            if(v[j]==0)
                v[j]=-1;
        }
        
        int mn =INT_MAX;
        int mx=INT_MIN;
        int val = 0;
        for(int k=0;k<A.size();k++){
            val = v[0]*A[k]+v[1]*B[k]+v[2]*C[k]+v[3]*D[k]+v[4]*k;
            mn = min(val,mn);
            mx = max(val,mx);
        }
        res = max(res , mx-mn);
    }
    return res;
}
