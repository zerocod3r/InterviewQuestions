public class Solution {
	public String longestCommonPrefix(ArrayList<String> A) {
	    int i,j,k;
        String st="";
        int smallestSize=A.get(0).length();
        for(i=1;i<A.size();i++){
            if(A.get(i).length()<smallestSize){
                smallestSize = A.get(i).length();
                k=i;
            }
        }

        int flag;
        char c;
        for(j=0;j<smallestSize;j++){
            flag=1;
            c = A.get(0).charAt(j);
            for(i=0;i<A.size();i++){
                if(A.get(i).charAt(j)!=c){
                    flag=0;
                }
            }
            if(flag==1){
                st+=c;
            }
        }
        return st;
	}
}
