// Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.


vector<int> Solution::plusOne(vector<int> &a) {
    if(a[0]==0 )
    {
        if(a.size()!=1){
        a.erase(a.begin());
        return plusOne(a);
        }
        else{
            a[0]=a[0]+1;
            return a;
            
        }
    }
    
    int n = a.size();
    a[n-1] += 1;
    int carry = a[n-1]/10;
    a[n-1] = a[n-1] % 10;
    for (int i=n-2; i>=0; i--)
    {
        if (carry == 1)
        {
           a[i] += 1;
           carry = a[i]/10;
           a[i] = a[i] % 10;
        }
    }
    if (carry == 1)
      a.insert(a.begin(), 1);
      
    return a;
}
