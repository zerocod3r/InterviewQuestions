public class Solution {
    
    static int getLPSArray(String s){
        int i=1,len=0;
        int n = s.length();
        int[] a = new int[n];
        a[0]=0;
        while(i<n){
            if(s.charAt(i) == s.charAt(len)){
                len++;
                a[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=a[len-1];
                }
                else{
                    a[i]=0;
                    i++;
                }
            }
        }
        
        return a[n-1];
    }
    
    public int solve(String s) {
        String rs;
        rs = new StringBuilder(s).reverse().toString();
        // for(int i=0;i<s.length();i++){
        //     rs+=s.charAt(s.length()-i+1);
        // }
            
        String ans = s + "$" + rs;
        
        return (s.length() - getLPSArray(ans));
    }
}

