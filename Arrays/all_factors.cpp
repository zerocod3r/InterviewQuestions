// Given a number N, find all factors of N.

vector<int> Solution::allFactors(int A) {
    int i=1;
    vector<int> res;
    if(A == 1){
        res.push_back(1);
        return res;
    }
    int count_f = 0, count_e = 0;
    while(i<=sqrt(A)){
        if(A%i == 0){
            res.insert(res.begin()+count_f,i);
            count_f++;
            if(i != sqrt(A)){
                res.insert(res.end()-count_e,A/i);
                count_e++;
            }
        }
        i++;
    }
    return res;
}
