// Given a number N >= 0, find its representation in binary.

string Solution::findDigitsInBinary(int A) {
    string b;
    int i;
    if(A == 0) return "0";
    while(A){
        i = A%2;
        A = A/2;
        b += to_string(i);
    }
    reverse(b.begin(), b.end());
    return b;
}
