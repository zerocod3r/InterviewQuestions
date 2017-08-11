bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int k) {
    int flag;
    int i,j;
    //vector<int> temp;
    sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    
    int a=0,d=0;
    for(i=arrive[0];i<depart[arrive.size()-1];i++){
        while(d<arrive.size() && i==depart[d]){
            k++;
            d++;
        }
        while(a<arrive.size() && i==arrive[a]){
            if(k>0)
                k--;
            else
                return false;
            a++;
        }
    }  
    return 1;
}
