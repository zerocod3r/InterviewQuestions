int Solution::maxSubArray(const vector<int> &A) {
    if (A.size() == 1) return A.at(0);
    int max_sum=A.at(0),max_end=0;
    for (int i=1;i<A.size();i++){
        max_end = max(A.at(i),max_end+A.at(i));
        if(max_sum < max_end) max_sum = max_end;
    }
    return max_sum;
}