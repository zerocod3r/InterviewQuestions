// Implement pow(x, n) % d.
// In other words, given x, n and d,

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long int p,rem=1;
	int ch=0;
	if(x==0)
		return 0;
	if(n==0)
		return 1;
	if(x<0){
		x=abs(x);
		if(n%2!=0){
			ch=1;
		}
	}
	p=x%d;
	while(n>0){
        if(n&1){
            rem=(rem*p)%d;
        }
        p=p*p;
        p=p%d;
        if(p<0)
            p+=d;
        n=n>>1;
    }
	if(ch==1)
		return d-(int)rem;
	else
		return (int)rem; 
}

