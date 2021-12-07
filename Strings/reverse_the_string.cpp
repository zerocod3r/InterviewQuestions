/*Given a string A.

Return the string A after reversing the string word by word.

NOTE:

A sequence of non-space characters constitutes a word.

Your reversed string should not contain leading or trailing spaces, even if it is present in the input string.

If there are multiple spaces between words, reduce them to a single space in the reversed string.

Input 1:
    A = "the sky is blue"
Output 1:
    "blue is sky the"

Input 2:
    A = "this is ib"
Output 2:
    "ib is this"
*/



string Solution::solve(string A) {
    int i=0;
    string ans="";
    string temp="";
    vector<string> slist{};
    int n = A.length();
    for(i=0;i<n;i++){
        if (i == n-1){
            if (A[i] != ' '){
                temp += A[i];
                slist.push_back(temp);
            }
        }
        if ((A[i] == ' ')&&(temp.length() > 0)){
            slist.push_back(temp);
            temp = "";
        }
        else if (A[i] != ' '){
            temp += A[i];
        }
    }
    for(i=slist.size()-1;i>=0;i--){
        ans += slist[i];
        if (i != 0)
            ans += ' ';
    }
    return ans;
}
