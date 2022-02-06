// Given a binary tree and a sum, find all root-to-leaf paths where each path’s sum equals the given sum.

// For example:

// Given the below binary tree and sum = 22,

//               5
//              / \
//             4   8
//            /   / \
//           11  13  4
//          /  \    / \
//         7    2  5   1
// return

// [
//    [5,4,11,2],
//    [5,8,4,5]
// ]



/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void pathSumUtil(TreeNode* A, int sum, vector<int>& path, vector<vector<int>>& ans){
    if(sum == 0 && A->left == NULL && A->right == NULL)
        ans.push_back(path);
    
    if(A->left != NULL){
        path.push_back(A->left->val);
        pathSumUtil(A->left, sum - A->left->val, path, ans);
        path.pop_back();
    }
    if(A->right != NULL){
        path.push_back(A->right->val);
        pathSumUtil(A->right, sum - A->right->val, path, ans);
        path.pop_back();
    }
}

vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    
    vector<vector<int>> ans;
    vector<int> path;
    if(A == NULL)
        return ans;
    path.push_back(A->val);
    pathSumUtil(A, B-A->val, path, ans);
    return ans;
}
