// Reverse digits of an integer.

int Solution::reverse(int A) {
    long long int ans = 0;
    bool neg = A < 0 ? 1:0;
    A = abs(A);
    while(A){
        ans = ans*10 + (A%10);
        A = A/10;
    }
    ans = (neg == 1) ? -ans:ans;
    if(-2147483648 > ans)
    return 0;
    
    if(2147483647 < ans)
    return 0;
    return ans;
}
