int Solution::hammingDistance(const vector<int> &A) {
    long long int ans=0,t;
    unsigned int val;
    for(int i=0;i<31;i++){
        t=0;
        for(int j=0;j<A.size();j++){
            if(A[j] & (1<<i))
                t++;
        }
        //t=t%1000000007;
        ans+=(2*t*(A.size()-t));
    }
    //cout<<ans%1000000007;
    return (int)ans%1000000007;
}
