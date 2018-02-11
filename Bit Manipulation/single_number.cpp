int Solution::singleNumber(const vector<int> &A) {
    if(A.size()==0){
        return 0;
    }
    int result=0;
    for(int i=0;i<A.size();i++){
        result = result ^ A.at(i);
    }
    return result;
}
