// Given numRows, generate the first numRows of Pascal’s triangle.
// Pascal’s triangle : To generate A[C] in row R, sum up A’[C] and A’[C-1] from previous row R - 1.

vector<vector<int> > Solution::solve(int n) {
    vector<vector<int>> A;
    for(int i=0;i<n;i++){
        vector<int> B;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
            {
                B.push_back(1);
            }
            else{
                B.push_back(A[i-1][j]+A[i-1][j-1]);
            }
        }
        A.push_back(B);
    }
    return A;
}
