/*The set [1,2,3,…,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order,

We get the following sequence (ie, for n = 3 ) :

1. "123"
2. "132"
3. "213"
4. "231"
5. "312"
6. "321"
Given n and k, return the kth permutation sequence.

For example, given n = 3, k = 4, ans = "231" */


int fact(int n)
{
    if (n>12)   
        return INT_MAX;
    int f = 1;
    for (auto i = 2; i<=n; ++i)
        f *= i;
    return f;
}

string solve(int k, vector<int>& nums){
    int n = nums.size();
    if(n==0 || k>fact(n)) return "";
    
    int index = k/fact(n-1);
    string ch = to_string(nums[index]);
    nums.erase(nums.begin()+index);
    k = k%fact(n-1);
    return ch + solve(k, nums);
}

string Solution::getPermutation(int A, int B) {
    vector<int> nums;
    for(int i=1;i<=A;i++)
        nums.push_back(i);
    return solve(B-1, nums);
}
