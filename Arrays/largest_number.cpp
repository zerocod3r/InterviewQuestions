// Given a list of non negative integers, arrange them such that they form the largest number.


int firstDigit(int n) 
{ 
    while (n >= 10)  
        n /= 10; 
    return n; 
} 

bool compare(int a, int b){
    if(firstDigit(a) > firstDigit(b)) return 1;
    else if(firstDigit(a) == firstDigit(b)) return stoi(to_string(a)+to_string(b)) > stoi(to_string(b)+to_string(a));
    else return 0;
}

string Solution::largestNumber(const vector<int> &A) {
    int n = A.size();
    string s;
    vector<int> B = A;
    sort(B.begin(),B.end(),compare);
    for(int i=0;i<n;i++){
        s+=to_string(B[i]);
    }
    if(s.front()=='0') return "0";
    
    return s;
}
