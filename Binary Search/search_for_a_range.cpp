int binarySearch(vector<int> A,int t,bool searchFirst){
    int low=0,high=A.size()-1;
    int res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(A[mid]==t){
            res=mid;
            if(searchFirst){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else if(A[mid]>t)
            high=mid-1;
        else
            low=mid+1;
    }
    return res;
}

// int getLast(vector<int> A,int t){
//     int n=A.size();
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if((mid==n-1 || A[mid+1]>t) && A[mid]==t)
//             return mid;
//         else if(A[mid]>t)
//             high=mid-1;
//         else
//             low=mid+1;
//     }
//     return -1;
// }


vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j;
    vector<int> ans;
    ans.push_back(binarySearch(A,B,true));
    ans.push_back(binarySearch(A,B,false));
    return ans;
}
