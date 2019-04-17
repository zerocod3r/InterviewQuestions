// Given an array of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.

public class Solution {
    public static int getMax(ArrayList<Integer> A){
        int i,max = A.get(0);
        for(i=0;i<A.size();i++){
            if(max < A.get(i))
                max = A.get(i);
        }
        return max;
    }
    
    public int findMinXor(ArrayList<Integer> A) {
        Collections.sort(A);
        int minxor = getMax(A);
        for(int i=0;i<A.size()-1;i++){
            minxor = Math.min(minxor,A.get(i)^A.get(i+1));
        }
        return minxor;
    }
}
