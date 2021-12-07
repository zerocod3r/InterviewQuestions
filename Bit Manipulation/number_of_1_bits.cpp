int numSetBits(unsigned int n) {
    int ct=0;
	while(n!=0){
		if(n & 1)
			ct++;
		n = (n >> 1);
	}
	return ct;
}
