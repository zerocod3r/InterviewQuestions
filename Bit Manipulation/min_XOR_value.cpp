/*
Ques-
Given an array of N integers, find the pair of integers in the array which have minimum XOR value. 
Report the minimum XOR value.

*/


bool sortFunc (int i,int j) { return (i<j); }

int Solution::findMinXor(vector<int> &A) {
    
    int MIN_VALUE = INT_MAX;
    std::sort(A.begin(),A.end(),sortFunc);
    int m = A.size();
    int val = 0;
    for(auto i=0;i<m-1;i++){
        val = A[i]^A[i+1];
        MIN_VALUE = min(val,MIN_VALUE);
    }
    
    return MIN_VALUE;
}
