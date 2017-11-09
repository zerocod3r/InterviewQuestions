public class Solution {
	public String reverseWords(String s) {
	    String ans = "";
        String temp = "";
        List<String> ls = new ArrayList<String>();
        for(int i=0;i<s.length();i++){
            if(i==s.length()-1){
                temp += s.charAt(s.length()-1);
                ls.add(temp);
            }
            if(Character.isWhitespace(s.charAt(i)) && temp.length()>0){
                ls.add(temp);
                temp = "";
            }
            else{temp += s.charAt(i);}
        }
        ListIterator li = ls.listIterator(ls.size());

        while(li.hasPrevious()) {
            ans += li.previous();
            if(li.hasPrevious()){
                ans += " ";
            }
        }
        return ans;
	}
}