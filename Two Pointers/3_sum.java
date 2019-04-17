// Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
// Return the sum of the three integers.
// Assume that there will only be one solution
// Example: 
// given array S = {-1 2 1 -4}, 
// and target = 1.
// The sum that is closest to the target is 2. (-1 + 2 + 1 = 2)

public class Solution {
    public int threeSumClosest(ArrayList<Integer> A, int B) {
        int i,j,k,res=0;
        int n = A.size();
        Collections.sort(A);
        int currDiff = Integer.MAX_VALUE;
        for(i=0;i<n-1;i++){
            j = i+1;
            k = n-1;
            while(j<k){
                int sum = A.get(i) + A.get(j) + A.get(k);
                if(Math.abs(B-sum) < currDiff){
                    currDiff = Math.abs(B-sum);
                    res = sum;
                }
                if(sum<B) j++;
                else k--;
            }
        }
        return res;
    }
}
