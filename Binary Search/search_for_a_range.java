// Given a sorted array of integers, find the starting and ending position of a given target value.
// Your algorithm’s runtime complexity must be in the order of O(log n).
// If the target is not found in the array, return [-1, -1].

public class Solution {
    // DO NOT MODIFY THE LIST
    public ArrayList<Integer> searchRange(final List<Integer> A, int B) {
        int leftpos = -1, rtpos = -1;
        ArrayList<Integer> ans = new ArrayList<Integer>();
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
        ans.add(leftpos);
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
        ans.add(rtpos);
        return ans;
    }
}
