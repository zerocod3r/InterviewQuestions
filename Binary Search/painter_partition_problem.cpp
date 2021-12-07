bool ispossible(vector<int> A,int k,long long mid){
    int _max=A[0];
    for(int i=0;i<A.size();i++){
    	if(_max<A[i])
    		_max=A[i];
	}
    if(_max>mid)
    	return false;
    long long int ct=1;
    long long int sum=0;
    for(int i=0;i<A.size();){
        if((sum+(long long)A[i])>mid){
            sum=0;
            ct++;
        }
        else{
            sum+=A[i];
            i++;
        }
    }
    if(ct<=k) return true;
    else return false;
}

int Solution::paint(int A, int B, vector<int> &C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int low=0,high=0;
    long long int ans=INT_MAX;
    ans*=INT_MAX;
    for(int i=0;i<C.size();i++){
        high+=C[i];
    }
    while(low<=high){
        long long int mid=(low+high)/2;
        if(ispossible(C,A,mid)){
            ans=min(ans,mid);
            high=mid-1;
        }
        else
            low=mid+1;
    }
    ans=(ans*(long long)B)%10000003;
    return (int)ans;
}
