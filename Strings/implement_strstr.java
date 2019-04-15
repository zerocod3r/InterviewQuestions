// Implement strStr().
// strstr - locate a substring ( needle ) in a string ( haystack ). 
// Try not to use standard library string functions for this question.
// Returns the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int strStr(final String A, final String B) {
        int i,j;
        int n = A.length();
        int m = B.length();
        if(m == 0) return -1;
        if(m > n || n == 0) return -1;
        int kmp[] = new int[m+1];
        for(i=1;i<m;i++){
            j = kmp[i+1];
            while(j>0 && B.charAt(j) != B.charAt(i))
                j = kmp[j];
            if(j>0 || B.charAt(j) == B.charAt(i))
                kmp[i+1] = j+1;
        }
        for(i=0,j=0;i<n;i++){
            if(j<m && A.charAt(i) == B.charAt(j)){
                if(++j == m) return i-j+1;
            }
            else if(j>0){
                j = kmp[j];
                i--;
            }
        }
        return -1;
    }
}
