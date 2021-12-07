int binarysearch(vector<int> a,int t){
    int low=0;
    int high=a.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(t==a[mid])
            return 1;
        else if(t<a[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return 0;
}

int Solution::searchMatrix(vector<vector<int> > &a, int t) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=a.size();
    int m=a[0].size();
    if(n==1){
        if(binarysearch(a[0],t))
            return 1;
        else
            return 0;
    }
    else if(m==1){
        vector<int> temp;
        for(int i=0;i<n;i++)
            temp.push_back(a[i][0]);
        
        if(binarysearch(temp,t))
            return 1;
        else
            return 0;
    }
    else{
        int k=0;
        for(int i=0;i<n;i++){
            if(a[i][m-1]>=t){
                k=i;
                break;
            }
        }
        if(binarysearch(a[k],t))
            return 1;
        else 
            return 0;
    }
}
