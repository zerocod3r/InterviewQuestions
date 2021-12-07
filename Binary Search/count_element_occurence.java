// Given a sorted array of integers, find the number of occurrences of a given target value.
// Your algorithm’s runtime complexity must be in the order of O(log n).
// If the target is not found in the array, return 0

public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int findCount(final List<Integer> A, int B) {
        int leftpos = -1, rtpos = -1;
        int low = 0, high = A.size() - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(A.get(mid) == B && (mid == 0 || A.get(mid-1) < B)){
                leftpos = mid;
                break;
            }
            else if(A.get(mid) < B) low = mid + 1;
            else high = mid - 1;
        }
        if(leftpos == -1) return 0;
        
        low = 0; high = A.size() - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(A.get(mid) == B && (mid == high || A.get(mid+1) > B)){
                rtpos = mid;
                break;
            }
            else if(A.get(mid) == B && !(mid == high || A.get(mid+1) > B)) low = mid + 1;
            else if(A.get(mid) < B) low = mid + 1;
            else high = mid - 1;
        }
        return rtpos - leftpos + 1;
    }
}
