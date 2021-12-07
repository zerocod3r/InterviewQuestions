void Solution::arrange(vector<int> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=a.size();
    for(int i=0;i<a.size();i++){
        a[i]=a[i] + (a[a[i]]%n)*n;
    }
    for(int i=0;i<a.size();i++){
        a[i]=a[i]/n;
    }
}
