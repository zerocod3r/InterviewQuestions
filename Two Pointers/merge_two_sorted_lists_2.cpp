// Given two sorted integer arrays A and B, merge B into A as one sorted array.

// Note: You have to modify the array A to contain the merge of A and B. Do not output anything in your code.

// TIP: C users, please malloc the result into a new array and return the result.

// If the number of elements initialized in A and B are m and n respectively, the resulting size of array A after your code is executed should be m + n

// Example :

// Input : 
         // A : [1 5 8]
         // B : [6 9]

// Modified A : [1 5 6 8 9]

void Solution::merge(vector<int> &A, vector<int> &B) {
    int i=0,j=0;
    int m=A.size();
    int n=B.size();
    int k=0;
    int r[m+n];
    while(i<m && j<n)
    {
            if(A[i]<=B[j]) {r[k]=A[i];k++;i++;}
            else { r[k]=B[j];k++;j++; }

    }
    while(i<m)
    {
            r[k]=A[i];k++;i++;
    }
        while(j<n)
    {
            r[k]=B[j];k++;j++;
    }
    A.clear();
    for(i=0;i<(m+n);i++)
        A.push_back(r[i]);
}
