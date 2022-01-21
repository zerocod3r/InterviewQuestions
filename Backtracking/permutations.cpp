/* Given a collection of numbers, return all possible permutations.

Example:

[1,2,3] will have the following permutations:

[1,2,3]
[1,3,2]
[2,1,3] 
[2,3,1] 
[3,1,2] 
[3,2,1]
*/

void swap(vector<int>& A, int i, int j){
    int t = A[i];
    A[i] = A[j];
    A[j] = t;
}

void permutation(vector<int>& A, int index, vector<vector<int>>& v){
    if(index >= A.size()){
        v.push_back(A);
        return;
    }
    
    for(int i=index;i<A.size();i++){
        swap(A, i, index);
        permutation(A, index+1, v);
        swap(A, i, index);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>> ans;
    permutation(A, 0, ans);
    return ans;
}
