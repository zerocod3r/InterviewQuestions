// Given a string S, reverse the string using stack.

public class Solution {
    public String reverseString(String A) {
        Stack<Character> s = new Stack<Character>();
        for(int i=0;i<A.length();i++){
            s.push(A.charAt(i));
        }
        String ans = "";
        while(s.isEmpty() == false){
            ans += s.pop();
        }
        return ans;
    }
}
