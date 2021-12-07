import java.util.*;
import java.io.*;

class Calculator{
    int power(int a, int b) throws Exception
    {
        if(a < 0 || b < 0) throw new Exception("n and p should be non-negative");
        else
        {
            if(b == 0) return 1;
            else{
                int p = a;
                for(int i=1;i<b;i++) p = p*a;
                return p;
            }
        }
    }
}

class Solution{

    public static void main(String[] args) {
    
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-- > 0) {
        
            int n = in.nextInt();
            int p = in.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            }
            catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        in.close();
    }
}
