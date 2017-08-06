vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j;
    vector<int> ans;
    if(A==0){
        ans.push_back(1);
    }
    else if(A==1){
        ans.push_back(1);
        ans.push_back(1);
    }
    else{
        j=1;
        for(i=1;i<=A+1;i++){
            ans.push_back(j);
            j=j*(A-i+1)/i;
        }
    }
    return ans;
}
