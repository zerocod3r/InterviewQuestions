int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=1,high=A/2;
    long long int ans=0;
    if(A==1)
        return 1;
    while(low<=high){
        long long int mid=(low+high)/2;
        if(mid*mid==A)
            return (int)mid;
        else if(mid*mid<A){
            low=mid+1;
            ans=mid;
        }
        else
            high=mid-1;
    }
    return (int)ans;
}
