public class Solution {
	// DO NOT MODIFY THE LIST
	
	static int binarySearch(List<Integer> arr, int low, int high, int key)
    {
        if (high < low)
            return -1;
        int mid = (low + high)/2;  /*low + (high - low)/2;*/
        if (key == arr.get(mid))
            return mid;
        if (key > arr.get(mid))
            return binarySearch(arr, (mid + 1), high, key);
        return binarySearch(arr, low, (mid -1), key);
    }
    
    static int findPivot(List<Integer> A,int low,int high){
        int i,j;
        int n = A.size();
        int mid = (low+high)/2;
        if (high < low)  return -1;
        if (high == low) return low;
        
        if(mid<high && A.get(mid+1)<A.get(mid)){
            return mid;
        }
        if(mid>low && A.get(mid-1)>A.get(mid)){
            return mid-1;
        }
        if(A.get(low)>=A.get(mid)){
            return findPivot(A,low,mid-1);
        }
        
        return findPivot(A,mid+1,high);
    }
    

	
	public int search(final List<Integer> A, int k) {
	    int n = A.size();
        int pivot = findPivot(A,0,n-1);
        
        if(pivot == -1){
            return binarySearch(A,0,n-1,k);
        }
        
        if(k==A.get(pivot)){
            return pivot;
        }
        if(k>=A.get(0)){
            return binarySearch(A,0,pivot-1,k);
        }
        
        return binarySearch(A,pivot+1,n-1,k);
	}
}
