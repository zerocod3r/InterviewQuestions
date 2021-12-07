/* Question - Print a sequence of numbers starting with N,
without using loop, in which  A[i+1] = A[i] - 5,  
if  A[i]>0, else A[i+1]=A[i] + 5  repeat it until A[i]=N. */

#include <iostream>
using namespace std;

void reduceBy5(int n){
    if(n<=0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    reduceBy5(n-5);
    cout<<n<<" ";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    reduceBy5(n);
	    cout<<"\n";
	}
	return 0;
}