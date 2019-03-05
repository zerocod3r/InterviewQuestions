// Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int maxSubArray(final List<Integer> A) {
        if(A.size() == 1) return A.get(0);
        int max_now = A.get(0),max_end = 0;
        for(int i:A){
            max_end = max_end + i;
            if(max_end < i) max_end = i;
            if(max_now < max_end) max_now = max_end;
        }
        return max_now;
    }
}
