vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    
    vector<vector<int> > ans(2*n-1, vector<int>());
    
    int k=0;
    for(int i=0;i<=2*(n-1);i++){
        for(int m=0;m<=i;m++){
            int j=i-m;
            if(m>=n || j>=n)
                continue;
            ans[k].push_back(A[m][j]);
        }
        k++;
    }
}