import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;

	// Add your code here
    Difference(int elements[]){
        this.elements = elements;
    }

    void computeDifference(){
        int max_ele = elements[0], min_ele = elements[0];
        for(int i=0;i<elements.length;i++){
            if(elements[i]>max_ele) max_ele = elements[i];
            if(elements[i]<min_ele) min_ele = elements[i];
        }
        maximumDifference = Math.abs(max_ele - min_ele);
    }

} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}