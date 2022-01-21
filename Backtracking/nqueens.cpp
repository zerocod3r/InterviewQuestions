/* The n-queens puzzle is the problem of placing n queens on an n×n chessboard such that no two queens attack each other.

Given an integer n, return all distinct solutions to the n-queens puzzle.

Each solution contains a distinct board configuration of the n-queens’ placement, where 'Q' and '.' both indicate a queen and an empty space respectively.

For example,

There exist two distinct solutions to the 4-queens puzzle:

[
 [".Q..",  // Solution 1
  "...Q",
  "Q...",
  "..Q."],

 ["..Q.",  // Solution 2
  "Q...",
  "...Q",
  ".Q.."]
]
*/

bool safePosition(vector<string> &temp, int row, int col, int A){
    int i, j;
    /* Check this row on left side */
    for (i = 0; i < col; i++)
        if (temp[row][i] == 'Q')
            return false;
  
    /* Check upper diagonal on left side */
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (temp[i][j] == 'Q')
            return false;
  
    /* Check lower diagonal on left side */
    for (i = row, j = col; j >= 0 && i < A; i++, j--)
        if (temp[i][j] == 'Q')
            return false;
  
    return true;
}

void backtracking(int a, int col, vector<string> &temp, vector<vector<string>> &res){
    if(col == a){
        res.push_back(temp);
        return;
    }
    
    for(int i=0;i<a;i++){
        if(safePosition(temp, i, col, a)){
            temp[i][col] = 'Q';
            backtracking(a, col+1, temp, res);
            temp[i][col] = '.';
        }
    }
}

vector<vector<string> > Solution::solveNQueens(int A) {
    vector<vector<string>> res;
    if (A == 2||A == 3)
        return res;
    string s(A,'.');
    vector<string> temp(A, s);
    backtracking(A, 0, temp, res);
    return res;
}
