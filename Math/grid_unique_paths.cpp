int Solution::uniquePaths(int A, int B) {
    
    //This approach is using Dynamic Programming.
    /*If has only one column or one row i.e. A==1 or B==1 then
    there will be only one path so return 1 when such condition
    arises.*/
    
    /*Divide the problem in subproblems. If you are at matrix[A,B] and 
    you go one down, than you are to find unique paths from matrix[A-1,B].
    Or if you go one right than you will have to find unique paths from matrix[A,B-1].*/
    
    //Run this recursively.
    
    if(A==1 || B==1)
        return 1;
    else
        return uniquePaths(A-1,B)+uniquePaths(A,B-1);
}
