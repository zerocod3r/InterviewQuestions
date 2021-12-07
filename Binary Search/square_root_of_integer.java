// Implement int sqrt(int x).
// Compute and return the square root of x.
// If x is not a perfect square, return floor(sqrt(x))

public class Solution {
    public int sqrt(int A) {
        int low = 1, high = A/2;
        int ans = 0;
        if(A == 2 || A == 1) return 1;
        while(low<=high){
            int mid = (low + high)/2;
            if(mid == A/mid){
                return mid;
            }
            else if(mid < A/mid){
                low = mid + 1;
                ans = mid;
            }
            else high = mid - 1;
        }
        return ans;
    }
}
