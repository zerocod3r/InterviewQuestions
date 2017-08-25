int Solution::gcd(int A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int d;
    if(A<B) d=A;
    else d=B;
    int i;
    while(d){
        if(A%d==0 && B%d==0){
            //cout<<d<<endl;
            //break;
            return d;
        }
        d--;
    }
    if(A==0) return B;
    else return A;
}
