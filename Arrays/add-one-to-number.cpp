// Given a non-negative number represented as an array of digits,
// add 1 to the number ( increment the number represented by the digits ).
// The digits are stored such that the most significant digit is at the head of the list.

vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    if(A[n-1] < 9){
        A[n-1] = A[n-1] + 1;
    }
    else if(A[n-1] == 9){
        for(int i=n-1;i>=0;i--){
            if(A[i] == 9 && i != 0){
                A[i] = 0;
            }
            else if(A[i] == 9 && i==0){
                A[i] = 1;
                A.push_back(0);
            }
            else{
                A[i] = A[i] + 1;
                break;
            }
        }
    }
    vector<int> B = A;
    for(int i=0;i<n;i++){
        if(B[i] == 0){
            A.erase(A.begin());
        }
        else{
            break;
        }
        
    }
    return A;
}
