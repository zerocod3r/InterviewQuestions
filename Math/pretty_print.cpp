vector<vector<int> > Solution::prettyPrint(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,k;
    vector<vector<int> > ans(2*A-1,vector<int>(2*A-1));
    int l=0,r=2*A-2;
    while(A){
        for(i=l;i<=r;i++){
            ans[l][i]=A;
            ans[r][i]=A;
            ans[i][l]=A;
            ans[i][r]=A;
        }
        l++;
        r--;
        A--;
    }
    return ans;
}
