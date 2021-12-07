bool Solution::isPalindrome(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A>=0){
        int b=0;
        int t=A;
        while(t){
            b=b*10 + t%10;
            t=t/10;
        }
        if(b==A)
            //cout<<"True"<<endl;
            return true;
        else
            //cout<<"False"<<endl;
            return false;
    }
    else
        return false;
}
