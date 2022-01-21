/* Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses of length 2*n.

For example, given n = 3, a solution set is:

"((()))", "(()())", "(())()", "()(())", "()()()"
Make sure the returned list of strings are sorted.
*/

void backtracking(int n, int open, int close, string str, vector<string>& res)
{
    if (str.length() == 2*n)
    {
        res.push_back(str);
        return;
    }
    if (open < n)
        backtracking(n, open+1, close, str+'(', res);
    if (open > close)
        backtracking(n, open, close+1, str+')', res);
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    
    if (A>0)
        backtracking(A, 0, 0, "", res);
    return res;
}
