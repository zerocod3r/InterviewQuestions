// Given three sorted arrays A, B and Cof not necessarily same sizes.
// Calculate the minimum absolute difference between the maximum and minimum number from the triplet a, b, c such that a, b, c belongs arrays A, B, C respectively.
// i.e. minimize | max(a,b,c) - min(a,b,c) |.

public class Solution {
    static int maxOfThree(int a,int b, int c){
        if(a >= b){
            if(a >= c) return a;
            else return c;
        }
        else{
            if(b >= c) return b;
            else return c;
        }
    }
    static int minOfThree(int a,int b, int c){
        if(a <= b){
            if(a <= c) return a;
            else return c;
        }
        else{
            if(b <= c) return b;
            else return c;
        }
    }
    public int solve(ArrayList<Integer> A, ArrayList<Integer> B, ArrayList<Integer> C) {
        int currentdiff, max, mindiff;
        int i=A.size()-1, j = B.size()-1, k = C.size()-1;
        mindiff = Math.abs(maxOfThree(A.get(i),B.get(j),C.get(k)) - minOfThree(A.get(i),B.get(j),C.get(k)));
        while(i>=0 && j>=0 && k>=0){
            currentdiff = Math.abs(maxOfThree(A.get(i),B.get(j),C.get(k)) - minOfThree(A.get(i),B.get(j),C.get(k)));
            if(mindiff > currentdiff)
                mindiff = currentdiff;
            max = maxOfThree(A.get(i),B.get(j),C.get(k));
            if(A.get(i) == max) i--;
            else if(B.get(j) == max) j--;
            else k--;
        }
        return mindiff;
    }
}
