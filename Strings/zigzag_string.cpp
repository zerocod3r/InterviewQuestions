public class Solution {
	public String convert(String str, int n) {
	    String ans = "";
        int i,j,k;
        int temp=1;
        if(n==1 || str.length()==1){
            return str;
        }
        for(i=1;i<=n;i++){
            j=i-1;
            if(i!=n)
                temp=1;
            else
                temp=0;
                
            while(j<str.length()){
                ans+=str.charAt(j);
                if(temp==1){
                    j+=2*(n-i);
                    if(i!=1)
                        temp=0;
                }
                else{
                    j=j+(i-1)*2;
                    if(i!=n)
                        temp=1;
                }
            }
        }
        return ans;
	}
}
