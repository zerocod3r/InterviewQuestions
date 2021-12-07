// Reverse bits of an 32 bit unsigned integer

unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int NO_OF_BITS = sizeof(A)*8;
	unsigned int reverse = 0;
	for(int i=0;i<NO_OF_BITS;i++){
		if(A&(1<<i)){
			reverse |= 1<<((NO_OF_BITS-1)-i);
		}	
	}
	return reverse;
}
