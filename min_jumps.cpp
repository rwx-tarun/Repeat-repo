int Solution::solve(vector<int> &a) {
    int n = a.size();

    if(a.size()==1)
        return 0;
    else if(a[0]==0)
        return -1;
    else{
        int maxReach = a[0];
        int jump = 1;
        int steps = a[0];
        for(int i=1;i<n;i++)
        {
            if(i==n-1)
                return jump;
            maxReach = max(maxReach , i+a[i]);
            steps --;
            if(steps == 0)
            {
                jump++;
                if(i>maxReach)
                    return -1;
                steps = maxReach - i;
            }
        }
    }
    
}
