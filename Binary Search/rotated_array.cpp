int Solution::findMin(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int low=0,high=A.size()-1;
    int n=A.size();
    int next,prev;
    while(low<=high){
        if(A[low]<=A[high])
            return A[low];
        int mid=(low+high)/2;
        next=(mid+1)%n;
        prev=(mid+n-1)%n;
        if(A[mid]<=A[next] && A[mid]<=A[prev])
            return A[mid];
        else if(A[mid]<=A[high])
            high=mid-1;
        else if(A[mid]>=A[low])
            low=mid+1;
    }
    return -1;
    
}