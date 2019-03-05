// Random Attendance

#define ll long long
ll getCount(ll A, ll l,ll r){
    ll ans=0;
    while(l<=A){
        ans+=min(A+1,r)-l;
        l*=10;r*=10;
    }
    return ans;
}
ll get(int A, int k){
    ll curr=1;k--;
    while(k){
        ll count=getCount(A,curr,curr+1);
        if(count<=k){
            curr++;
            k-=count;
        }
        else{
            curr*=10;
            k--;
        }
    }
    return curr;
}
vector<int> Solution::solve(int A, vector<int> &B) {
    vector<int> ans=B;
    for(auto &k:ans){
        k=get(A,k);
    }
    return ans;
}
