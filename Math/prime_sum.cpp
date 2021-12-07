int isPrime(int n){
    if (n <= 1)
        return 0;
    else if (n <= 3)
        return 1;
    else if (n%2 == 0 || n%3 == 0)
        return 0;
    int i=5;
    while (i * i <= n){
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
        i=i + 6;
    }
    return 1;
}



vector<int> Solution::primesum(int n) {
    int i,j,k;
    int a,b;
    vector<int> ans;
    for(i=0;i<n;i++){
        if(isPrime(i)==1 && isPrime(n-i)==1){
            b=i;
            a=n-i;
            break;
        }
    }
    ans.push_back(b);
    ans.push_back(a);
    return ans;
}
