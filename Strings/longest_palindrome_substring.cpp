int expandAroundCenter(string s, int left, int right,int len){
	int l=left,r=right;
	while(l>=0 && r<len && s[l]==s[r]){
		l--;
		r++;
	}
	return r-l+1;
}

string Solution::longestPalindrome(string s) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int start=0,end=0;
    int n = s.length();
	for(int i=n;i>=0;i--){
		int l1=expandAroundCenter(s,i,i,n);
		int l2=expandAroundCenter(s,i,i+1,n);
		int l=max(l1,l2);
		if(l>end-start){
			start=i - (l-1)/2;
			end=i + l/2;
		}
	}
	string ans="";
	for(int i=start+1;i<end;i++){
		ans+=s[i];
	}	
	return ans;
}
