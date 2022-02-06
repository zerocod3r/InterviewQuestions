// Problem Description

// Given two equally sized 1-D arrays A, B containing N integers each.

// A sum combination is made by adding one element from array A and another element of array B.

// Return the maximum C valid sum combinations from all the possible sum combinations.

// Example Input
// Input 1:

//  A = [3, 2]
//  B = [1, 4]
//  C = 2
// Input 2:

//  A = [1, 4, 2, 3]
//  B = [2, 5, 1, 6]
//  C = 4


// Example Output
// Output 1:

//  [7, 6]
// Output 1:

//  [10, 9, 9, 8]


// Example Explanation
// Explanation 1:

//  7     (A : 3) + (B : 4)
//  6     (A : 2) + (B : 4)
// Explanation 2:

//  10   (A : 4) + (B : 6)
//  9   (A : 4) + (B : 5)
//  9   (A : 3) + (B : 6)
//  8   (A : 3) + (B : 5)


vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C) {
    priority_queue<pair<int, pair<int, int>>> hp;
	set<pair<int, int>> S;
	int n = A.size();
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	hp.push(make_pair(A[n-1]+B[n-1], make_pair(n-1, n-1)));
	S.insert(make_pair(n-1, n-1));

	vector<int> ans;
	while(C--){
		pair<int, pair<int, int> > top = hp.top();
		hp.pop();
		ans.push_back(top.first);
		int L = top.second.first;
		int R = top.second.second;
		
		if( R>0 && L>=0  && S.find(make_pair(L,R-1)) == S.end() ){
			hp.push(make_pair(A[L]+B[R-1], make_pair(L,R-1)));
			S.insert(make_pair(L,R-1));
		}
		if( R>=0  && L>0 && S.find(make_pair(L-1, R))==S.end()){
			hp.push(make_pair(A[L-1]+B[R], make_pair(L-1,R)));
			S.insert(make_pair(L-1, R));
		}
	}
	return ans;
}
