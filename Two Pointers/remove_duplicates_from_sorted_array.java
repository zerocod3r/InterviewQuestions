// Remove duplicates from Sorted Array
// Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

public class Solution {
    public int removeDuplicates(ArrayList<Integer> A) {
        if(A.size() == 0) return 0;
        if(A.size() == 1) return 1;
        int i,j=0;
        for(i=0;i<A.size()-1;i++){
            if(A.get(i).equals(A.get(i+1)) == false){
                A.set(j++,A.get(i));
            }
        }
        A.set(j++,A.get(A.size()-1));
        // for(i=j;i<A.size();i++) A.remove(i);
        return j;
    }
}
