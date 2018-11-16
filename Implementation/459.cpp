#include <iostream>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	int count=0;
    int A[n];
    for( int i=0;i<n;i++)
    {
        cin>>A[i];
        }
    for(int i=0;i<n;i++)
    {
      if(A[i]>=A[k-1]&& A[i]>0){
          count++;
      }  
    }
        
    cout<<count;
	return 0;
}
