/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
    
    static String specialSequence(int n){
        int i,j,k;
        String ans="1";
        if(n==0){
            return null;
        }
        if(n==1){
            return "1";
        }
        // if(n==2){
        //     return "11";
        // }
        int ct;
        i=1;
        StringBuilder sb;
        while(i<n){
            sb = new StringBuilder();
            ct=1;
            for(j=1;j<ans.length();j++){
                if(ans.charAt(j)==ans.charAt(j-1)){
                    ct++;
                }
                else{
                    sb.append(ct);
                    sb.append(ans.charAt(j-1));
                    ct=1;
                }
            }
            sb.append(ct);
            sb.append(ans.charAt(ans.length()-1));
            ans = sb.toString();
            i++;
        }
        return ans;
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		int n = 4;
		System.out.println(specialSequence(n));
	}
}
