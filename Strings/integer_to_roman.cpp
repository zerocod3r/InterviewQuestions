public class Solution {
	public String intToRoman(int n) {
	    int i,j,k;
        String s = "";
        while(n!=0){
            if(n>=1000){
                j = n/1000;
                while(j!=0){
                    s+="M";
                    j--;
                }
                n = n%1000;
            }
            else if(n>=500){
                if(n<900){
                    j = n/500;
                    while(j!=0){
                        s+="D";
                        j--;
                    }
                    n = n%500;
                }
                else{
                    s+="CM";
                    n = n%100;
                }
            }
            else if(n>=100){
                if(n<400){
                    j = n/100;
                    while(j!=0){
                        s+="C";
                        j--;
                    }
                    n = n%100;
                }
                else{
                    s+="CD";
                    n = n%100;
                }
            }
            else if(n>=50){
                if(n<90){
                    j = n/50;
                    while(j!=0){
                        s+="L";
                        j--;
                    }
                    n = n%50;
                }
                else{
                    s+="XC";
                    n = n%10;
                }
            }
            else if(n>=10){
                if(n<40){
                    j = n/10;
                    while(j!=0){
                        s+="X";
                        j--;
                    }
                    n = n%10;
                }
                else{
                    s+="XL";
                    n = n%10;
                }
            }
            else if(n>=5){
                if(n<9){
                    j = n/5;
                    while(j!=0){
                        s+="V";
                        j--;
                    }
                    n = n%5;
                }
                else{
                    s+="IX";
                    n = 0;
                }
            }
            else if(n>=1){
                if(n<4){
                    j = n/1;
                    while(j!=0){
                        s+="I";
                        j--;
                    }
                    n = 0;
                }
                else{
                    s+="IV";
                    n = 0;
                }
            }
        }
        return s;
	}
}
