public class Solution {
	public int isPalindrome(String s) {
	    int i,j;
        char c;
        List<Character> list = new ArrayList<Character>();
        for(i=0;i<s.length();i++){
            if(Character.isLetter(s.charAt(i))){
                list.add(Character.toLowerCase(s.charAt(i)));
            }
            if(Character.isDigit(s.charAt(i))){
                list.add(s.charAt(i));
            }
        }
        int n = list.size(),flag=1;
        if(n == 1) return 1;

        if(n%2 == 1){
            i=n/2 - 1;
            j=n/2 + 1;
            while(i>=0 && j<n){
                if(list.get(i) != list.get(j)){
                    flag=0;
                    break;
                }
                i--;
                j++;
            }
        }
        if(n%2 == 0){
            i=n/2 - 1;
            j=n/2;
            while(i>=0 && j<n){
                if(list.get(i) != list.get(j)){
                    flag=0;
                    break;
                }
                i--;
                j++;
            }
        }
        return flag;
	}
}
