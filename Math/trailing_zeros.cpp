int Solution::trailingZeroes(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int j=0;
    long long int i=1;
    while((A/i)!=0){
        i=i*5;
        j=j+(A/i);
        //A=A/5;
    }
    return (int)j;
}
