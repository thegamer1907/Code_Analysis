#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n,max1=0;
  cin>>n;
  int A[n];
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  for(int i=0;i<n;i++){
    if(A[i]==1) max1++;
  }
  int globmax=max1;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int maxLoc=max1;
      for(int k=i;k<=j;k++){
	if(A[k]==1) maxLoc--;
	else maxLoc++;
      }
      globmax=max(globmax,maxLoc);
    }
  }
  if(max1==n) cout<<n-1<<endl;
  else cout<<globmax<<endl;
}
