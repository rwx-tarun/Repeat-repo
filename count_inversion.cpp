long mod =1e9+7;
int merge(int l,int h,int m,vector<int>&A){
    int n1 = m-l+1;
    int n2 = h-m;
    vector<int>lf(n1,0);
    vector<int>rt(n2,0);
    for(int i=0;i<n1;i++)lf[i]=A[l+i];
    for(int i=0;i<n2;i++)rt[i]=A[m+1+i];

    int i =0,j=0,k=l;
    long res=0;
    while(i<n1 && j<n2){
        if(lf[i]<=rt[j]){
            A[k++]=lf[i++];
        }
        else{
            A[k++]=rt[j++];
            res = (res + (n1-i))%mod;
        }
    }
    while(i<n1)
        A[k++]=lf[i++];
    while(j<n2)
        A[k++]=rt[j++];    
    return (int)(res%mod);
}

int mergeSort(vector<int> &A,int l,int h){
    long res =0;
    if(l<h){
        int m = l +(h-l)/2;
        res  = res +  mergeSort(A,l,m);
        res  = res +  mergeSort(A,m+1,h);
        res  = res +  merge(l,h,m,A);
    }
    return (int)(res%mod);
}



int Solution::solve(vector<int> &A) {
    int r =  mergeSort(A,0,A.size()-1);
    return r;
}
