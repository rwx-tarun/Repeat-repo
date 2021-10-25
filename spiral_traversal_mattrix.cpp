vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int>>res(A,vector<int>(A));
    if(A==1){
        res[0][0]=1;
        return res;
    }
    int w,x,y,z;
    w=0; top
    x=A-1;bottom 
    y=0;left 
    z=A-1;right
    int cnt =0;
    while(w<=x && y<=z)
    {
        for(int i=y;i<=z;i++)
        {
            res[w][i]=++cnt;
        }
        w++;
        for(int i = w;i<=x;i++)
        {
            res[i][z]=++cnt;
        }
        z--;
        if (x>=w){
            for(int i = z;i>=y;i--)
            {
                res[x][i]=++cnt;
            }
            x--;
        }
        if (z>=y){
        for(int i=x;i>=w;i++)
            {   
                res[i][y]=++cnt;
            }
            y++;
        }
            
    }
    return res;
    
}
