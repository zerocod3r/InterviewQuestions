/* For Given Number N find if its COLORFUL number or not

Return 0/1

COLORFUL number:

A number can be broken into different contiguous sub-subsequence parts. 
Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245. 
And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different
Example:

N = 23
2 3 23
2 -> 2
3 -> 3
23 -> 6
this number is a COLORFUL number since product of every digit of a sub-sequence are different. 

Output : 1 
*/

int Solution::colorful(int A) {
    int i=0,j=0;
    string number = to_string(A);
    unordered_set<long long int> stringSet;
    for(i=0;i<number.length();i++){
        long long int mul = 1;
        for(j=i;j<number.length();j++){
            mul *= (long long int)(number[j] - '0');
            if(stringSet.find(mul) != stringSet.end())
                return 0;
            stringSet.insert(mul);
        }
    }
    return 1;
}
