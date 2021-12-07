// You are given an array A containing N integers. The special product of each ith integer in this array is defined as the product of the following:
// LeftSpecialValue: For an index i, it is defined as the index j such that A[j]>A[i] (i>j). If multiple A[j]’s are present in multiple positions, the LeftSpecialValue is the maximum value of j. 
// RightSpecialValue: For an index i, it is defined as the index j such that A[j]>A[i] (j>i). If multiple A[j]s are present in multiple positions, the RightSpecialValue is the minimum value of j.
// Write a program to find the maximum special product of any integer in the array.

int mult_mod(int i, int j) {
    return ((i%1000000007) * (j%1000000007)) % 1000000007;
}


int next_bigger(std::vector<int>& v, std::stack<int>& stack, int i){
    while(!stack.empty()){
        int j = stack.top();
        if (v[j] <= v[i]){
            stack.pop();
        }
        else{
            stack.push(i);
            return j;
        }
    }
    stack.push(i);
    return 0;
}

void right( std::vector<int>& v, std::vector<int>& r ){
    std::stack<int> stack;

    for(int i = v.size() - 1; i >= 0; --i){
        r[i] = next_bigger(v, stack, i);
        stack.push(i);
    }
}

int Solution::maxSpecialProduct(vector<int> &A) {
    std::vector<int> r(A.size());
    right(A, r);

    long long int mp = 0;
    std::stack<int> stack;
    for (int i = 0; i < A.size(); ++i)
    {
        long long int j = next_bigger(A, stack, i);
        long long int mp_i = j * r[i];
        if (mp < mp_i)
        {
            mp = mp_i;
        }
    }
    return mp % 1000000007;
}
