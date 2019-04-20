import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int t;
        Scanner sc = new Scanner(System.in);
        t = sc.nextInt();
        while(t>0){
            int n = sc.nextInt();
            if(n == 1){
                System.out.println("Not prime");
            }
            else{
                int flag = 0;
                for(int i=2;i<=Math.sqrt(n);i++){
                    if(n%i == 0){
                        System.out.println("Not prime");
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0) System.out.println("Prime");
            }
            t--;
        }
    }
}

