import java.io.*;
import java.util.*;

public class Solution {
    String stack_str = "";
    String queue_str = "";

    void pushCharacter(char c){
        if(stack_str.length() == 0) stack_str = Character.toString(c);
        else stack_str = stack_str + Character.toString(c);
    }

    void enqueueCharacter(char c){
        if(queue_str.length() == 0) queue_str = Character.toString(c);
        else queue_str = Character.toString(c) + queue_str;
    }
	
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();

        // Convert input String to an array of characters:
        char[] s = input.toCharArray();

        // Create a Solution object:
        Solution p = new Solution();

        // Enqueue/Push all chars to their respective data structures:
        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        // Pop/Dequeue the chars at the head of both data structures and compare them:
        boolean isPalindrome = true;
        for (int i = 0; i < s.length/2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;                
                break;
            }
        }

        //Finally, print whether string s is palindrome or not.
        System.out.println( "The word, " + input + ", is " 
                           + ( (!isPalindrome) ? "not a palindrome." : "a palindrome." ) );
    }
}