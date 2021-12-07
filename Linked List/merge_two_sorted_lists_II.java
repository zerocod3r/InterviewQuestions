// Given two sorted integer arrays A and B, merge B into A as one sorted array.
// If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

public class Solution {
    public void merge(ArrayList<Integer> a, ArrayList<Integer> b) {
        
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a.get(i) > b.get(j)){
                a.add(i,b.get(j));
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        while(j<b.size()){
            a.add(b.get(j));
            j++;
        }
    }
}
