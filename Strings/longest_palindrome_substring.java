// Given a string S, find the longest palindromic substring in S.
// Substring of string S:
// S[i...j] where 0 <= i <= j < len(S)
// Palindrome string:
// A string which reads the same backwards. More formally, S is palindrome if reverse(S) = S.
// Incase of conflict, return the substring which occurs first ( with the least starting index ).

public class Solution {
    public String longestPalindrome(String A) {
        int start = 0;
        int length = A.length();
        int maxLen = 1;
        
        int low = 0, high;
        
        for(int i = 0; i < length; i++){
            low = i-1;
            high = i;
            while((low >= 0) && (high < length) && (A.charAt(low) == A.charAt(high))){
                if((high - low + 1) > maxLen){
                    maxLen = high-low+1;
                    start = low;
                }        
                low--;
                high++;
            }
            
            low = i-1;
            high = i+1;
            while((low >= 0) && (high < length) && (A.charAt(low) == A.charAt(high))){
                if((high - low + 1) > maxLen){
                    maxLen = high-low+1;
                    start = low;
                }
                low--;
                high++;
            }
        }
        
        String sol = "";
        
        high = start+maxLen;
        while(start != high){
            sol = sol + A.charAt(start);
            start++;
        }
        
        return sol;
    }
}
