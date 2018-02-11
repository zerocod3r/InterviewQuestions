/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
    static int LCM(String x, String y){
        int i,j;
        int m = x.length(), n = y.length();
        int[][] mat = new int[m+1][n+1];
        
        for(i=0;i<=m;i++){
            for(j=0;j<=n;j++){
                if(i==0 || j==0)
                    mat[i][j] = 0;
                else if(x.charAt(i-1)==y.charAt(j-1))
                    mat[i][j] = mat[i-1][j-1] + 1;
                else
                    mat[i][j] = max(mat[i-1][j],mat[i][j-1]);
            }
        }
        return mat[m][n];
    }
    
    static int max(int i,int j){
        if(i>j) return i;
        else return j;
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		String x = "AGGTAB";
		String y = "GXTXAYB";
		System.out.println(LCM(x,y));
	}
}
