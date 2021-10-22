// Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

// You may assume that the intervals were initially sorted according to their start times.
vector<Interval> Solution::insert(vector<Interval> &v, Interval vn) {

    vector<Interval>res;
    int start = vn.start;
    int end = vn.end;
    int n = v.size();
    int flag =0;
    for(int i=0;i<n;i++)
    {
        if(v[i].end<start)
        {   
            res.push_back(v[i]);
        }
        else if(v[i].start>end)
            {
                if(!flag)
                    res.push_back({start,end});
                res.push_back(v[i]);
                flag =1;
            }
        else{
        start = min(start,v[i].start);
        end = max(end,v[i].end);
        }
    }
    if(!flag)
    res.push_back({start,end});
    return res;
}
