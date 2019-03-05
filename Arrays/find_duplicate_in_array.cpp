// Given a read only array of n + 1 integers between 1 and n, 
// find one number that repeats in linear time using 
// less than O(n) space and traversing the stream sequentially O(1) times.

int Solution::repeatedNumber(const vector<int> &A) {
    vector<bool> B(A.size());
    for(int i=0;i<A.size();i++) B[i] = false;
    
    for(int i=0;i<B.size();i++){
        if(!B[A[i]]) B[A[i]] = true;
        else return A[i];
    }
    return -1;
}
