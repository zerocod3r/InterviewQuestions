import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {



    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        int t = n,b;
        String s = "";
        int max = 0, ct = 0;
        while(t!=0){
            b = t%2;
            t = t/2;
            if(b == 1) ct++;
            if(b == 0) ct = 0;
            if(ct > max) max = ct;
        }
        System.out.println(max);
        scanner.close();
    }
}
