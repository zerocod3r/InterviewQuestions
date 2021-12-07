public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int atoi(final String A) {
        int n = A.length();
        long value = 0;
        int sign = 1,i=0;
        if(A.charAt(i) == '-' || A.charAt(i) == '+'){
            if(A.charAt(i) == '-'){
                sign = -1;
            }
            i++;
        }
        char t;
        while(i<n){
            if(Character.isDigit(A.charAt(i))){
                value *= 10;
                t = A.charAt(i);
                value += (int)(t - '0');
                if(value>Integer.MAX_VALUE)
                {
                    if(sign == -1){
                        return Integer.MIN_VALUE;
                    }
                    return Integer.MAX_VALUE;
                }
                i++;
                
            }
            else{
                break;
            }
        }
        
        return (int)(value*sign);
    }
}
