#include <iostream> 
#include <vector> 
  
using namespace std; 

int spiralOrder(vector<int> &A, vector<int> &B) {
    for(int i: A)
        cout<<i;
    for(int j: B)
        cout<<j;
    return 2;
}
 
int main() 
{ 
    vector<int> A {0,1,1};
    vector<int> B {0,1,2};
    cout<<"Result: "<<spiralOrder(A,B);
}

