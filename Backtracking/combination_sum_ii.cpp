/* Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.

Note:

All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
The solution set must not contain duplicate combinations.
Example :

Given candidate set 10,1,2,7,6,1,5 and target 8,

A solution set is:

[1, 7]
[1, 2, 5]
[2, 6]
[1, 1, 6]
*/

void backtracking(vector<int> &A, int start, int target, vector<vector<int>>& res, vector<int> row){
    if(target == 0){
        res.push_back(row);
        return;
    }
    
    for(int i=start;i<A.size();i++){
        if(i != start && A[i] == A[i-1])
            continue;
        
        if(A[i] > target)
            break;
        
        row.push_back(A[i]);
        backtracking(A, i+1, target - A[i], res, row);
        row.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    vector<int> row;
    sort(A.begin(), A.end());
    backtracking(A,0,B,res,row);
    return res;
}
