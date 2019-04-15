// Given two binary strings, return their sum (also a binary string).

int makeEqualLength(string &str1, string &str2) 
{ 
    int len1 = str1.size(); 
    int len2 = str2.size(); 
    if (len1 < len2) 
    { 
        for (int i = 0 ; i < len2 - len1 ; i++) 
            str1 = '0' + str1; 
        return len2; 
    } 
    else if (len1 > len2) 
    { 
        for (int i = 0 ; i < len1 - len2 ; i++) 
            str2 = '0' + str2; 
    } 
    return len1;  
} 

string Solution::addBinary(string A, string B) {
    string ans;
    int n = makeEqualLength(A,B);
    int carry = 0,i,j;
    for(i=n-1;i>=0;i--){
        int fb = A[i] - '0';
        int sb = B[i] - '0';
        ans = (char)((fb ^ sb ^ carry) + '0') + ans;
        carry = (fb & sb) | (sb & carry) | (carry & fb);
    }
    if(carry) ans = '1' + ans;
    return ans;
}
