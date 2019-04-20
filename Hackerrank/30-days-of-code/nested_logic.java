import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        String[] actualDateStr = sc.nextLine().split(" ");
        String[] expectedDateStr = sc.nextLine().split(" ");
        int fine = 0;
        for(int i=actualDateStr.length-1;i>=0;i--){
            int a = Integer.parseInt(actualDateStr[i]);
            int e = Integer.parseInt(expectedDateStr[i]);
            if(i == 2){
                if(a > e){
                    fine = 10000;
                    break;
                }
            }
            else if(i == 1){
                if(a > e && Integer.parseInt(actualDateStr[i+1]) >= Integer.parseInt(expectedDateStr[i+1])){
                    fine = 500*(a-e);
                    break;
                }
            }
            else{
                if(a > e && Integer.parseInt(actualDateStr[i+1]) >= Integer.parseInt(expectedDateStr[i+1]) && Integer.parseInt(actualDateStr[i+2]) >= Integer.parseInt(expectedDateStr[i+2])){
                    fine = 15*(a-e);
                    break;
                }
            }
        }
        System.out.println(fine);
    }
}

