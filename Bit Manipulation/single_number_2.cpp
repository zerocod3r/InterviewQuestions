int Solution::singleNumber(const vector<int> &A) {
    if(A.size()==0){
        return 0;
    }
    int result;
    int fst=0,sec=0;
    for(int i=0;i<A.size();i++){
        sec = sec | (fst & A.at(i));
        fst = fst ^ A.at(i);
        result = ~(fst & sec);
        fst = fst & result;
        sec = sec & result;
    }
    return fst;
}
