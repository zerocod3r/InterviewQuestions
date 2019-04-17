// Given an array of integers, every element appears twice except for one. Find that single one.

public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int singleNumber(final List<Integer> A) {
        if(A.size() == 0) return 0;
        int res = 0;
        for(int i=0;i<A.size();i++)
            res = res ^ A.get(i);
        return res;
    }
}
