/* Given a string A consisting only of '(' and ')'.

You need to find whether parantheses in A is balanced or not ,if it is balanced then return 1 else return 0.

Input 1:

 A = "(()())"
Input 2:

 A = "(()"

 Output 1:

 1
Output 2:

 0 */

int Solution::solve(string A) {
    vector<char> stack;
    int n = A.length();
    if(n == 1) return 0;
    for(int i=0;i<n;i++){
        if('(' == A[i]){
            stack.push_back(A[i]);
        }
        if(')' == A[i]){
            if(!stack.empty()){
                stack.pop_back();
            }
            else{
                return 0;
            }
        }
    }
    if(!stack.empty()) return 0;
    return 1;
}
