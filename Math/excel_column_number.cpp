int Solution::titleToNumber(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int m=0;
    for(int i=0;i<A.length();i++){
        m=m*26+A[i]-'A'+1;
    }
    return m;
}
