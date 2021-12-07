// Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int m = A.size();
    int n = A[0].size();
    int rs = 0, re = m-1;
    int cs = 0, ce = n-1;
    int i,j,d=0;
    vector<int> B;
    while(rs<=re && cs<=ce){
        if(d == 0){
            for(j=cs;j<=ce;j++) cout<<A[rs][j]<<" ";
            rs++;
        }
        else if(d==1){
            for(i=rs;i<=re;i++) cout<<A[i][ce]<<" ";
            ce--;
        }
        else if(d == 2){
            for(j=ce;j>=cs;j--) cout<<A[re][j]<<" ";
            re--;
        }
        else if(d == 3){
            for(i=re;i>=rs;i--) cout<<A[i][cs]<<" ";
            cs++;
        }
        d = (d+1)%4;
    }
    return B;
}
